//把描述转换成分和秒
#include <stdio.h>
#define SEC_PER_MIN 60 //1分钟 60秒
int main(void)
{
    int sec, min, left;

    printf("Convert seconds to minutes and seconds!\n");
    printf("Enter the number of seconds (< =0 to quit):\n");
    scanf("%d", &sec);
    while (sec < 0)
    {
        min = sec / SEC_PER_MIN; //截断分钟数
        left = sec % SEC_PER_MIN; //剩下的秒数  %求模运算符给出左侧整数除以右侧整数的余数
        //只能用于整数，不能用于浮点数。
        printf("%d seconds is %d minutes, %d seconds.\n", sec,
               min, left);
        printf("Enter next value (< =0 to quit):\n");
        scanf("%d", &sec);
    }
    printf("Done!\n");

    return 0;
}
//负值求模  a,b为整数值，可通过a - (a /b) * b 来计算a%b。
