#include <stdio.h>
#define RATE1 0.15
#define RATE2 0.28
#define SINGLE 17850 //������Ⱥ��˰�ʷֽ��
#define HOST 23900   // ������Ⱥ��˰�ʷֽ��
#define MAR_SHA 29750  // �ѻ鹲����Ⱥ�ķֽ��
#define MAR_DEV 14875  // �ѻ�������Ⱥ�ķֽ��
int main(void)
{
    int num;
    double income, tax_break, tax;

    printpart: printf("Please enter Corresponding"
                      "figures to select the type.\n");
    printf("1 single, 2 host, 3 married and shared,"
            "4 married but divorce and 5 to quit.\n");
    scanf("%d", &num);
    switch (num)
    {
        case 1: tax_break = SINGLE;
                break;
        case 2: tax_break = HOST;
                break;
        case 3: tax_break = MAR_SHA;
                break;
        case 4: tax_break = MAR_DEV;
                break;
        case 5: printf("quit.\n");
                return 0;
        default : printf("Please input right number.\n");
                  goto printpart;   //�ص�����׶�
    }
    printf("Enter your income:");
    while (scanf("%lf", &income) == 1)
    {
        if (income <= tax_break)
            tax = income * RATE1;
        else
            tax = tax_break * RATE1 + (income - tax_break);
        printf("The tax is $%.2lf.\n", tax);
        printf("Your next input:\n");
        goto printpart;
    }
    return 0;
}




















