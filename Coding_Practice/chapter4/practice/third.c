#include <stdio.h>
int main(void)
{
    float number;

    printf("Input a number:");
    scanf("%f", &number);
    printf("number is %.1f or %.1e", number, number);
}
