#include <stdio.h>
int main(void)
{
    int i = 0;
    while (++i < 4)
        printf("Hi! ");
    printf("%d", i);
    do
        printf("Bye! ");
    while (i++ < 8);
    printf("%d", i);
    return 0;
}
