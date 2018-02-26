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
        //isPrime = true 表明当循环完成后 isPrime 还是= true的话 num的值是素数 说明未进入下面的if循环语句
        {
            if (num % div == 0)
            {
                if((div * div) != num)
                printf("%lu is divisible by %lu and %lu.\n",
                       num, div, num / div);
                else
                printf("%lu is divisible by %lu.\n",
                       num, div);
                isPrime = false;      //若num是素数,则会将ture换成false

            }
        }
        if (isPrime)   //if(isPrime == 1)
            printf("%lu is prime.\n", num);   //输出素数
        printf("Please enter another integer for analysis: ");
        printf("Enter q to quit.\n");
    }
    printf("Bye.\n");

    return 0;
}
