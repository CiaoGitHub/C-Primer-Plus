/*ȷ������Ҫ�������ѭ�����ǳ�������ѭ����
1.һ��ԭ������ִ��ѭ��֮ǰ���������ȽϺá�
2.������������ѭ���Ŀ�ͷ���ɶ��Ըߡ�*/
//Ƕ��ѭ������
#include <stdio.h>
#define ROWS 6
#define CHARS 10
int main (void)
{
    int row;
    char ch;

    for (row = 0; row < ROWS; row++) //���ѭ��  ROWS=6 ��ѭ��ִ��6��
    {
        for (ch = 'A'; ch < ('A' + CHARS); ch++) //�ڲ�ѭ�� CHARS=10 ��ѭ��ִ��10�� ��ӡA~J
            printf("%c", ch);
        printf("\n");
    }                                 //�ڲ�ѭ��һ�д�ӡʮ���ַ������ѭ������6��

    return 0;
}
