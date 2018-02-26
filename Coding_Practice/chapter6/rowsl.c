/*确定是需要入口条件循环还是出口条件循环。
1.一般原则是在执行循环之前测试条件比较好。
2.测试条件放在循环的开头，可读性高。*/
//嵌套循环！！
#include <stdio.h>
#define ROWS 6
#define CHARS 10
int main (void)
{
    int row;
    char ch;

    for (row = 0; row < ROWS; row++) //外层循环  ROWS=6 故循环执行6次
    {
        for (ch = 'A'; ch < ('A' + CHARS); ch++) //内层循环 CHARS=10 故循环执行10次 打印A~J
            printf("%c", ch);
        printf("\n");
    }                                 //内层循环一行打印十个字符，外层循环创建6行

    return 0;
}
