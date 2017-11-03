#include <stdio.h>
int main(void)
{
    float height;
    char name[40];

    printf("input your height(cm) and name:");
    scanf("%f%s", &height, name);
    height = height / 100;
    printf("%s, your are %.3f m tall.\n", name, height);

    return 0;
}
