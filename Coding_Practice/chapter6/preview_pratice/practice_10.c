#include <stdio.h>
int main(void)
{
    int lower, upper;
    int num1, num2,sum;
    printf("Enter lower and upper integer limits:");
    scanf("%d %d", &lower, &upper);
    num1 = lower;
    num2 = upper;
    while (lower < upper)
    {
        num1 = lower * lower;
        num2 = upper * upper;
        for (sum = 0; lower <= upper; lower++)
            sum = sum + (lower * lower);
        printf("The sum of the squares from %d to %d is %d\n",
                num1, num2, sum);
        printf("Enter next set of limits:");
        scanf("%d %d", &lower, &upper);
    }
    printf("Done.\n");
    return 0;
}
