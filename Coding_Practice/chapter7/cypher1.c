#include <stdio.h>
#define SPACE ' '
int main(void)
{
    char ch;

    ch = getchar();           //��ȡһ���ַ�
    while(ch != '\n')         //��һ��δ����ʱ  while((ch = getchar()) != '\n')
    {
        if(ch == SPACE)       //���¿ո�
            putchar(ch);      //���ַ�����
        else
            putchar(ch + 1);  //�ַ���1
        ch = getchar();       //��ȡ��һ���ַ�
    }
    putchar(ch);              //��ӡ���з�

    return 0;
}
