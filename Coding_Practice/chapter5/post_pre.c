#include <stdio.h>
int main(void)
{
    int a = 1, b = 1;
    int a_post, pre_b;

    a_post = a++; //��׺���� a�ȸ���a_post �ٵ���1
    pre_b = ++b; //ǰ׺���� b�ȵ���1 �ٸ���pre_b
    printf("a   a_post   b   pre_b \n");
    printf("%1d %5d %5d %5d\n", a, a_post, b, pre_b);

    /*����
    q = 2 * ++a; //a����1��Ȼ��2����a ���������q
    q = 2 * a++; //2����a�������������q��Ȼ��a����1  */
}
