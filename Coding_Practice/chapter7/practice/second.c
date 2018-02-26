#include <stdio.h>
int main(void)
{
    int ch;
    int n_chars = 1;

    while ((ch = getchar()) != '#')
    {
        printf("%3d (%3d)", ch, ch);
        if (n_chars++ % 8 == 0)
            printf("\n");
    }
    printf("\n");

    return 0;

}
