#include <stdio.h>
#define TAXRATE 0.015 /*明示常量，大写常量可提高可读性*/
#define PI 3.314159
int main(void)
{
    float area, circum, radius;

    printf("What is the radius if your pizza?\n");
    scanf("%f", &radius);
    area = PI * radius * radius;
    circum = 2.0 * PI * radius;
    printf("Your basic pizza parameters are as follows:\n");
    printf("circumference = %1.2f, area = %1.2f\n", circum, area);/*%1.2f 表明结果被四舍五入*/

    return 0;
}

