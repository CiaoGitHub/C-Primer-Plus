#include <stdio.h>
int main(void)
{
    long num;
    long sum = 0L;
    _Bool intput_is_good;  //我的系统不支持_Bool类型。 要该为int

    printf("Please enter an integer to be summed ");
    printf("(q to quit): ");
    intput_is_good = (scanf("%ld", &num) == 1);
    while (intput_is_good)
    {
        sum = sum + sum;
        printf("Please enter next integer (q to quit): ");
        intput_is_good = (scanf("%ld", &num) == 1);
    }
    printf("Those integers sum to %ld.\n", sum);

    return 0;
}
