#include <stdio.h>
int main(void)
{
    long num;
    long sum = 0L;
    int status;

    printf("Please enter an integer to be summed");
    printf("(q to quit):");
    status = scanf("%ld", &num);
    while (status == 1)
    {
        sum = sum + num;
        printf("Please enter next integer (q to quit): ");
        status = scanf("%ld", &num); //scanf 的两个作用 1. 读取一个新值 2. 返回值 如果是数字则返回1 不是数字则返回0.

    }
    printf("Those integers sum to %ld.\n", sum);

    return 0;
}
