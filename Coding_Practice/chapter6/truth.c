#include <stdio.h>
int main(void)
{
    int n = 3;

    while (n) //���еķ���ֵΪ�棬ֻ��0����Ϊ�١�ϰ��ʹ������while(goats)��ʽ ��
        printf("%2d is true\n", n--);
    printf("%2d is false\n", n);

    n = -3;
    while (n)
        printf("%2d is true\n", n++);
    printf("%2d is false\n", n);

    return 0;
}
