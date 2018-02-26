#include <stdio.h>
int main(void)
{
    int n = 3;

    while (n) //所有的非零值为真，只有0被视为假。习惯使用类似while(goats)形式 。
        printf("%2d is true\n", n--);
    printf("%2d is false\n", n);

    n = -3;
    while (n)
        printf("%2d is true\n", n++);
    printf("%2d is false\n", n);

    return 0;
}
