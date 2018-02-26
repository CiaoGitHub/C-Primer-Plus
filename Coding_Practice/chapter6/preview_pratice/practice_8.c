#include <stdio.h>
int main(void)
{
    float a, b;

    printf("input two numbers:");
    while(scanf("%f%f", &a, &b) == 2)
    {
        printf("%f\n", (a - b) / (a * b));
        printf("input your next pair of numbers: ");
    }
    printf("Bye!\n");
    return 0;
}
