#include <stdio.h>
int main(void) //����ǰ20�����ĺ�
{
    int count, sum;

    count = 0;
    sum = 0;
    while (count++ < 20)  //��������ṹ�����
        sum = sum + count; //���������Բ��û����������� ��������Ҫ
    printf("sum = %d\n", sum);

    return 0;

}
