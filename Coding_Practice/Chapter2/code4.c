#include <stdio.h>
void jolly(void);
void deny(void);
int main()
{
    jolly();
    jolly();
    jolly();
    deny();

    return 0;
}
void jolly(void)
{
    printf("For he's a jolly good fellow!");
}
void deny(void)
{
    printf("Which nobody can deny!");
}