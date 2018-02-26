#include <stdio.h>
#define BASE 10.00    //
#define TIME 40
#define MUL 1.5
#define RATE1 0.15
#define RATE2 0.2
#define RATE3 0.25
#define BREAK1 300
#define BREAK2 450
int main(void)
{
    double hour, tax, gross;

    printf("input your work hours in a week:");
    scanf("%lf", &hour);
    if (hour <= TIME)
        gross = hour * BASE;
    else
        gross = TIME * BASE + (hour - TIME) * MUL * BASE;  //计算总收入
    if (gross <= BREAK1)
        tax = gross * RATE1;
    else if (gross <= BREAK2)
        tax = BREAK1 * RATE1 + (gross - BREAK1) * RATE2;
    else
        tax = BREAK1 * RATE1 + (BREAK2 - BREAK1) * RATE2 + (gross - BREAK2) * RATE3;  //计算税金

    printf("Your gross income is $%.2lf\n Your tax is $%.2lf\n"
           "your net income is $%.2lf\n", gross, tax, (gross - tax));

    return 0;
}




















