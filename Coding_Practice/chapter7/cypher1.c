#include <stdio.h>
#define SPACE ' '
int main(void)
{
    char ch;

    ch = getchar();           //读取一个字符
    while(ch != '\n')         //当一行未结束时  while((ch = getchar()) != '\n')
    {
        if(ch == SPACE)       //留下空格
            putchar(ch);      //该字符不变
        else
            putchar(ch + 1);  //字符加1
        ch = getchar();       //获取下一个字符
    }
    putchar(ch);              //打印换行符

    return 0;
}
