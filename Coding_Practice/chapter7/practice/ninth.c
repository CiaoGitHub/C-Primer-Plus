#include <stdio.h>
int main(void)
{
    int div, prime;
    int num, count;
    int flag;

    printf("input a positive integer:");
    scanf("%d", &num);
    printf("The prime numbers in range:\n");
    for (prime = 2; prime <= num; prime++)         //测试小于num的值
    {
        flag = 1;                                  //外标记为1 如果prime是素数则不会进入if语句
        for (div = 2; (div * div) <= prime; div++) //素数的算法
            if (prime % div == 0)
            {
                count++;
                flag = 0;
            }
    if (flag)                                      // 如果flag=1 说明此时prime是素数。
        printf("%d", prime);
    }
    return 0;
}
