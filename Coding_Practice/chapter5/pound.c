#include <stdio.h>
void pound(int n); //void �ú���û�з���ֵ �ú�����һ��int���͵Ĳ���
int main(void)
{
    int times = 5; //������times��˽�е�
    char ch = '!';
    float f = 6.0f;

    pound(times); //times��pound()��ʵ�Ρ�
    pound(ch);
    pound(f); //���û��֮ǰ��ָ��int���ͣ���ô��ת����double������ʹ��ǿ������ת����int ��((int)f).

    return 0;
}

void pound(int n) //n ��pound()���βΡ�
{
    while (n-- > 0)
        printf("#");
    printf("\n");
}
