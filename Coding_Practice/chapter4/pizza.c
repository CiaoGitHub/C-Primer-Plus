#include <stdio.h>
#define TAXRATE 0.015 /*��ʾ��������д��������߿ɶ���*/
#define PI 3.314159
int main(void)
{
    float area, circum, radius;

    printf("What is the radius if your pizza?\n");
    scanf("%f", &radius);
    area = PI * radius * radius;
    circum = 2.0 * PI * radius;
    printf("Your basic pizza parameters are as follows:\n");
    printf("circumference = %1.2f, area = %1.2f\n", circum, area);/*%1.2f �����������������*/

    return 0;
}

