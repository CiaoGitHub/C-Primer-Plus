#include <stdio.h>
#define SIZE 8
int main(void)
{
    int num[SIZE];
    int index;

    printf("input eight numbers:");
    for (index = 0; index < SIZE; index++)
        scanf("%d", &num[index]);
    for (index = 7; index >= 0; index--)
        printf("%d ", num[index]);

    return 0;

}
