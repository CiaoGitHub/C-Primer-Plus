#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char ch;

    while ((ch = getchar()) != '\n')
    {
        if (isalpha(ch))            //如果是一个字符
            putchar(ch + 1);      //显示该字符的下一个字符
        else                        //否则
            putchar(ch);            //原样显示
    }
    putchar(ch);                    //显示换行符

    return 0;
}
