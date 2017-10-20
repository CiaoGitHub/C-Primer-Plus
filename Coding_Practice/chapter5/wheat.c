#include <stdio.h>
#define SQUARES 64 //64次
int main(void)
{
    const double CROP = 2E16;//世界小麦年产谷粒数
    double current, total;
    int count = 1;

    printf("square    grains    total    ");
    printf("fraction of \n");
    printf("         added     grains    ");
    printf("world total\n");
    total = current = 1.0;//第一颗谷粒开始
    printf("%4d %13.2e %12.2e %12.2e\n", count, current,
           total, total / CROP);
    while (count < SQUARES)//条件 循环开始
    {
        count = count + 1;
        current = 2 * current; //2 的n次方
        total = total + current;//总的小麦数
        printf("%4d %13.2e %12.2e %12.2e\n", count, current,
               total, total / CROP);
    }
    printf("That's all.");

    return 0;

}
