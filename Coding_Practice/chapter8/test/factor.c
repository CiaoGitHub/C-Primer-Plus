/*#include <stdio.h>
long fact(int n);
long rfact(int n);
int main(void)
{
    int num;
    while (scanf("%d", &num) == 1)
    {
        if (num < 0)
            printf("xxx");
        else if (num > 12)
            printf("xxx");
        else
        {
            printf("loop: %d factorial = %ld\n", num, fact(num));
            printf("recursion: %d factorial = %ld\n", num, rfact(num));
        }
        printf("q to quit:\n");
    }
    printf("Bye.\n");
    return 0;
}
long fact(int n)
{
    long ans;
    for (ans = 1; n > 1; n--)
        ans *= n;
    return ans;
}
long rfact(int n)
{
    long ans;
    if (n > 0)
        ans = n * fact(n - 1);
    else
        ans = 1;
    return ans;
}*/











