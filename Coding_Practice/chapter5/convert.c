#include <stdio.h>
int main(void)
{
    char ch;
    int i;
    float fl;

    fl = i = ch = 'C';
    printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl); //'C' 在ASCII 中是67
    ch = ch + 1;
    i = fl + 2 * ch; //67+2*68=203
    fl = 2.0 * ch + i; //2.0*68+203
    printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);
    ch = 1107;
    printf("Now ch = %c\n", ch); //类型降级 ch的值是1107%265，即83 对应S
    ch = 80.89;
    printf("Now ch = %c\n", ch); //类型降级 浮点数发生截断 80对应P

    return 0;
}
