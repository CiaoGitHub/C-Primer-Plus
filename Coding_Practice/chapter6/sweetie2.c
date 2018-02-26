#include <stdio.h>
int main (void)
{
    const int NUMBER = 22;
    int count;

    for (count = 1; count <= NUMBER; count++) //(初始化且只执行一次;测试条件 真时进入循环 假时退出;执行更新,在每次循环结束时求值)
        printf("Be my Valentine! \n");

    return 0;
}
