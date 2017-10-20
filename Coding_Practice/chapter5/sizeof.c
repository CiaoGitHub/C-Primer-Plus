#include <stdio.h>
int main(void)
{
    int n = 13;
    size_t intsize;

    intsize = sizeof (int);
    printf("n = %d, n has %u butes; all ints have %lu bytes.\n",
           n, sizeof n, intsize); //sizeof 后面加 常量或变量 以字节为单位返回运算对象的大小

    return 0;
}
