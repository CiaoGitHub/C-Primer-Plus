#include <stdio.h>
int main(void)
{
    int div, prime;
    int num, count;
    int flag;

    printf("input a positive integer:");
    scanf("%d", &num);
    printf("The prime numbers in range:\n");
    for (prime = 2; prime <= num; prime++)         //����С��num��ֵ
    {
        flag = 1;                                  //����Ϊ1 ���prime�������򲻻����if���
        for (div = 2; (div * div) <= prime; div++) //�������㷨
            if (prime % div == 0)
            {
                count++;
                flag = 0;
            }
    if (flag)                                      // ���flag=1 ˵����ʱprime��������
        printf("%d", prime);
    }
    return 0;
}
