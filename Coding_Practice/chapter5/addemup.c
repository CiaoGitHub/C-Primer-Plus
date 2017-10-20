#include <stdio.h>
int main(void) //计算前20个数的和
{
    int count, sum;

    count = 0;
    sum = 0;
    while (count++ < 20)  //迭代语句或结构化语句
        sum = sum + count; //单挑语句可以不用花括号括起来 多条则需要
    printf("sum = %d\n", sum);

    return 0;

}
