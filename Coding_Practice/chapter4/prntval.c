#include <stdio.h> /*printf()的返回值*/
int main(void)
{
    int bph2o = 212;
    int rv;

    rv = printf("%d F is water's boiling point.\n", bph2o);/*打印信息和变量赋值 计算包括了空格及换行符\n共32 ch*/
    printf("The printf() function printed %d characters.\n",
            rv);/*编译器会忽略多余的空白。*/

    return 0;
}
