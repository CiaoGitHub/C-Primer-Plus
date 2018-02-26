#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    unsigned long num;
    unsigned long div;
    bool isPrime;

    printf("Please enter an integer for analysis: ");
    printf("Enter q to quit.\n");
    while (scanf("%lu", &num) == 1)
    {
        for (div = 2, isPrime = true; (div * div) <= num; div++)
        //isPrime = true ������ѭ����ɺ� isPrime ����= true�Ļ� num��ֵ������ ˵��δ���������ifѭ�����
        {
            if (num % div == 0)
            {
                if((div * div) != num)
                printf("%lu is divisible by %lu and %lu.\n",
                       num, div, num / div);
                else
                printf("%lu is divisible by %lu.\n",
                       num, div);
                isPrime = false;      //��num������,��Ὣture����false

            }
        }
        if (isPrime)   //if(isPrime == 1)
            printf("%lu is prime.\n", num);   //�������
        printf("Please enter another integer for analysis: ");
        printf("Enter q to quit.\n");
    }
    printf("Bye.\n");

    return 0;
}
