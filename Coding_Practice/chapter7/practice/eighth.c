#include<stdio.h>
#define BASE1 8.75
#define BASE2 9.33
#define BASE3 10.00
#define BASE4 11.20
#define TIME 40
#define MUL 1.5
#define RATE1 0.15
#define RATE2 0.2
#define RATE3 0.25
#define BREAK1 300
#define BREAK2 450
int main(void)
{
    double base, hour, tax, gross;
    int count, num;
    const int LENGTH = 65;

    printpart: for (count = 0; count < LENGTH; count++)   //count为循环变量
                    printf("*");
    printf("\nEnter the number corresponding to the desired pay rate or action:\n");
    printf("%-36s%s", "1)$8.75/hr","2)$9.33/hr\n");
    printf("%-36s%s", "3)$10.00/hr", "4)%11.20/hr\n");
    printf("%s\n", "5)quit");
    for (count = 0; count < LENGTH; count++)
        printf("*");
    printf("\n");
    while (scanf("%d", &num) == 1)          //当输入为数字，进入循环体
    {
        switch (num)
        {
            case 1: base = BASE1;
                    break;
            case 2: base = BASE2;
                    break;
            case 3: base = BASE3;
                    break;
            case 4: base = BASE4;
                    break;
            case 5: printf("quit.\n");
                    return 0;
            default: printf("please input the right option.\n");
                     goto printpart;                 //goto语句去到上面的printpart for循环中
        }
        printf("input your work hours in a week:");
        scanf("%lf", &hour);
        if (hour <= TIME)
            gross = hour * base;
        else
            gross = TIME * base + (hour - TIME) * MUL * base;  //计算总收入
        if (gross <= BREAK1)
            tax = gross * RATE1;
        else if (gross <= BREAK2)
            tax = BREAK1 * RATE1 + (gross - BREAK1) * RATE2;
        else
            tax = BREAK1 * RATE1 + (BREAK2 - BREAK1) * RATE2 + (gross - BREAK2) * RATE3; //计算税金
        printf("Your gross income is $%.2lf\n Your tax is $%.2lf\n"
               "Your net income is $%.2lf\n", gross, tax, (gross - tax));
        printf("\n Your next choice:\n");
    }
    return 0;
}

















