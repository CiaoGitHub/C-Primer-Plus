#include <stdio.h>
#define SIZE 5
int main(void)
{
    char ch;
    int i, j;

    for(ch = 'A',i = 0; i <= 5; i++)
    {
        for(j = 0; j <= i; j++)
            printf("%c", ch++);
        printf("\n");
    }

    return 0;
}
