#include<stdio.h>
int main(void)
{
    float salary;

    printf("\aEnter you desired monthly salary:");
    printf(" $_______\b\b\b\b\b\b\b");
    scanf("%f", &salary);
    printf("\n\t$%.1f a month is $%.2f a year.", salary, salary * 12);
    printf("\rGee!\n");

    return 0;

}
