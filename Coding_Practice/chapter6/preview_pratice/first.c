
#include <stdio.h>
#define hang 4
#define heng 8
int main (void)
{
    int i, j;

    for(i = 0; i < hang; i++)
    {
        for (j = 0; j < heng; j++)
            printf("$");
        printf("\n");
    }

    return 0;
}
