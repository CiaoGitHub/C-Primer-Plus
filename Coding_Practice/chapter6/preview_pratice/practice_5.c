#include <stdio.h>
#define SIZE 5
int main(void)
{
    char ch;
    int i, j;

    for(ch = 'A', i = 1; i <= SIZE; i++)
    {
        for(j = 1; j <= SIZE-i; j++)
            printf(" ");
        for(j = 0; j < i; j++)
            printf("%c", ch + j);
        for(j = i - 2; j >= 0; j--)
            printf("%c", ch + j);
        printf("\n");
    }

    return 0;
}
