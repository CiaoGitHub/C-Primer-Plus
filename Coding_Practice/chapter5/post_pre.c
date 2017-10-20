#include <stdio.h>
int main(void)
{
    int a = 1, b = 1;
    int a_post, pre_b;

    a_post = a++; //后缀递增 a先赋给a_post 再递增1
    pre_b = ++b; //前缀递增 b先递增1 再赋给pre_b
    printf("a   a_post   b   pre_b \n");
    printf("%1d %5d %5d %5d\n", a, a_post, b, pre_b);

    /*例子
    q = 2 * ++a; //a递增1，然后，2乘以a 最后结果赋给q
    q = 2 * a++; //2乘以a，并将结果赋给q，然后a递增1  */
}
