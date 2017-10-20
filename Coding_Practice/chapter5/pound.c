#include <stdio.h>
void pound(int n); //void 该函数没有返回值 该函数有一个int类型的参数
int main(void)
{
    int times = 5; //变量名times是私有的
    char ch = '!';
    float f = 6.0f;

    pound(times); //times是pound()的实参。
    pound(ch);
    pound(f); //如果没有之前的指明int类型，那么会转换成double，可以使用强制类型转换成int 如((int)f).

    return 0;
}

void pound(int n) //n 是pound()的形参。
{
    while (n-- > 0)
        printf("#");
    printf("\n");
}
