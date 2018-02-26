#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char ch;

    printf("...");
    while ((ch = getchar()) != '#')
    {
        if ('\n' == ch)
            continue;
        if (islower (ch))
            switch (ch)
        {
        case 'a':
            printf("argali.\n");
            break;
        case 'b':
            printf("babirusa.\n");
            break;
        case 'c':
            printf("coati.\n");
            break;
        default:
            printf("That's a stumper!\n");
        }
        else
            printf("I recognize only lowercase letters.\n");
        while (getchar() != '\n')
            continue;
        printf("Please type another letter or a #.\n");
    }
    printf("Bye!\n");

    return 0;

}
