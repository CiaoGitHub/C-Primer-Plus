#include <stdio.h>
int main(void)
{
    int n;

    printf("Please enter three integers:\n");
    scanf("%*d %*d %d", &n);//要读取文件中特定列的内容时，可以使用跳过功能。
    printf("The last integer was %d\n", n);

    return 0;
}
