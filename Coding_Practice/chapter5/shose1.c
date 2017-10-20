//把鞋码换成尺寸
#include <stdio.h>
#define ADJUST 7.31//创建符号常量
int main(void)
{
    const double SCALE = 0.333;
    double shoe, foot;

    shoe = 9.0;
    foot = SCALE * shoe + ADJUST;//简单的四则运算
    printf("Shoe size (men's)   foot length\n");
    printf("%10.1f %15.2f inches\n", shoe, foot);

    return 0;
}
