#include <stdio.h>
int main(void)
{
    int age;
    float assets;
    char pet[30];//字符数组，用于储存字符串
    char ch;

    printf("Enter your age, assets, and favorite pet.\n");
    scanf("%d %f", &age, &assets);/*读取基本变量时，要使用&*/
    scanf("%s", pet);//字符数组不使用&
    printf("%d $%.2f %s\n", age, assets, pet);
    scanf(" %c", &ch);//对于%c，scanf()会从第一个非空白字符读取
    printf("%c", &ch);

    return 0;
}
