
#include <stdio.h>
double power(double n, int p); /*ANSI函数原型 表明power()函数返回一个double类型的值  （两个参数） 末尾有分号;
                               前置声明 预先说明函数的返回类型*/
int main (void)
{
    double x, xpow;
    int exp;

    printf("Enter a number and the positive integer power");
    printf(" to which \nthe number will be raised. Enter q");
    printf(" to quit.\n");
    while (scanf("%lf%d", &x, &exp) == 2)  //scanf()函数不必声明 stdio.h已经表明其返回的类型是int。
    {
        xpow = power(x, exp); // 函数调用 把两个值传递给它
        printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
        printf("Enter next pair of numbers or q to quit.\n");
    }
    printf("Hope you enjoyed this power trip -- bye!\n");

    return 0;
}

double power (double n, int p) //函数定义  末尾无分号;
{
    double pow = 1;
    int i;

    for (i = 1; i <=p; i++)
        pow *= n;

    return pow; //返回pow的值
}
/* 声明函数 调用函数 定义函数 使用关键字return 都是定义和使用带返回值函数的基本要素 */
