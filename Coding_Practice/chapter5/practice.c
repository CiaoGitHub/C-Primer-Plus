#include <stdio.h>
int main(void)
{
    int y = 2, n = 3, nextnum;

    nextnum = (y + n++)*6; //�����͵ݼ������ֻ��Ӱ��һ�� ���޸� ����ֵ �ʣ����Ϊ(2 + 3)*6.
    printf("%d\n", nextnum); //n ��ֵֻ���ڱ�ʹ��֮��Ż����Ϊ4.

    int ans, num = 10;

    ans = num / 2 + 5 * (1 + num++);
    printf("%d\n", ans);

    int mice;

    mice = 1.6 + 1.7;
    mice = (int)1.6 + (int)1.7; //ǿ������ת������� Բ���ź���������������
    printf("%d", mice);
    return 0;

}
