#include <stdio.h>
int main(void)
{
    int n;

    printf("Please enter three integers:\n");
    scanf("%*d %*d %d", &n);//Ҫ��ȡ�ļ����ض��е�����ʱ������ʹ���������ܡ�
    printf("The last integer was %d\n", n);

    return 0;
}
