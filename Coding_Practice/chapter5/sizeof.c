#include <stdio.h>
int main(void)
{
    int n = 13;
    size_t intsize;

    intsize = sizeof (int);
    printf("n = %d, n has %u butes; all ints have %lu bytes.\n",
           n, sizeof n, intsize); //sizeof ����� ��������� ���ֽ�Ϊ��λ�����������Ĵ�С

    return 0;
}
