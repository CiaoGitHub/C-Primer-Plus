#include <stdio.h>
#include <stdlib.h>
long get_long (void);
long bad_limits(long begin, long end,
                long low, long high);
double sum_squares(long a, long b);
int main(void)
{
    const long MIN = -10000000L;
    const long MAX = +10000000L;
    long start;
    long stop;
    double answer;

    printf("-----");
    start = get_long();
    printf("upper limit: ");
    stop = get_long();
    while (start != 0 || stop != 0)
    {
        if (bad_limits(start, stop, MIN, MAX))
            printf("Please try again.\n");
        else
        {
            answer = sum_squares(start, stop);

        }
    }
}
long get_long(void)
{
    long input;
    char ch;

    while (scanf("%ld", &input) != 1)
    {
        while ((ch = getchar()) != '\n')
            putchar(ch);
        printf("---");             //说明输入值不行
    }
    return 0;
}
double sum_squares(long a, long b)
{
    double total = 0;
    long i;

    for (i = a; i <= b; i++)
        total += double i * double i;

    return total;
}
bool bad_limits(long begin, long end,
                long low, long high)
{

}















