#include <stdio.h>
double calculate(double n1, double n2);
int main(void)
{
    double a, b;

    while (scanf("%lf,%lf", &a, &b) == 2);
    {
        printf("%lf\n", calculate(a, b));
        printf("input your next pair of numbers:");
    }
    printf("Bye!\n");

    return 0;
}

double calculate(double n1, double n2)
{
    return ((n1 - n2) / (n1 * n2));
}
