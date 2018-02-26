#include <stdio.h>
int main(void)
{
    char ch;
    int x = 0, y;

    while ((ch = getchar()) != '#')
    {
        if (ch == '.')
        {
            ch = '!';
            x++;
        }
        else if (ch == '!')
        {
            printf("!");
            x++;
        }
        printf("%c", ch);
    }
    printf("\n %d ´ÎÌæ»»¡£", x);

    return 0;
}
