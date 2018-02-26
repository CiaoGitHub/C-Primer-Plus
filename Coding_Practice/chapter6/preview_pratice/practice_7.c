#include <stdio.h>
#define SIZE 40
int main(void)
{
    int index;
    char ch[SIZE];
    printf("Input a word: ");
    scanf("%s", ch);
    for (index = strlen(ch); index >= 0; index--)
        printf("%c", ch[index]);
    printf("\n");

    return 0;
}
