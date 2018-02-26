#include <stdio.h>
void fun(int m)
{
    int aa[20], i, k = 2;
    for (i = 0; m; i++)
    {
        aa[i] = m % k;
        m /= k;
    }
    printf("\n");
    for (; i; i--)
        printf("%d", aa[i]);
}
int main(void)
{
    int n;
    printf("请输入一个十进制整数：\n");
    scanf("%d", &n);
    fun(n);
    return 0;
}
