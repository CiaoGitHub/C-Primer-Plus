#include <stdio.h>
#define SPACE 32
#define CTRL 64
#define COL 10    //每行打印10对
int main(void)
{
    char ch;
    int count = 0;

    while ((ch = getchar()) != EOF)
    {
       count++;           // 每行打印10对
    if (ch >= SPACE)
        printf("%c", ch);
    else if (ch == '\n' || ch == '\t')
        printf("%s", ch == '\n' ? "\\n" : "\\t");
    else
        printf("x%c", ch + CTRL);
    printf("%-5d", ch);
    if (ch == '\n')
        count = 0;
    if (count % COL == 0)
        printf("\n");
    }
    return 0;
}










