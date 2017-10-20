#include <stdio.h>
int main(void)
{
    int top, score;

    top = score = -(2 + 5) * 6 + (4 + 3 *(2 + 3)); //乘除法优先于加减法 同级时从左至右运算
    printf("top = %d, score = %d\n", top, score); // = 运算符的结合律时从左至右
}
