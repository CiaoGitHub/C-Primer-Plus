/*#include <stdio.h>   //11-9
#include <string.h>
#define SIZE 40
#define QUIT "quit"
char *s_gets(char *st, int n);
void reserve(char *st);
int main(void)
{
    char str[SIZE];
    while (strcmp(s_gets(str, SIZE), QUIT))
    {
        reserve(str);
        puts(str);
    }
    return 0;
}
char *s_gets(char *st, int n)           //自定义的字符串输入函数
{
    char *ret_val;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        while (*st != '\n' && *st != '\0')
            st++;
        if (*st == '\n')
            *st = '\0';
        else
            while (getchar() != '\n')
            continue;
    }
    return ret_val;
}
void reserve(char *st)
{
    int i, length;
    char temp;

    length = strlen(st);
    for (i = 0; i < length / 2; i++)
    {
        temp = st[length - i - 1];
        st[length - i - 1] = st[i];
        st[i] = temp;
    }
    st[length] = '\0';
}
*/




