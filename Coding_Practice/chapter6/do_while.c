// do while ѭ������ʹ��  ��doһ���� �ڿ���������������  ��Ϊ��������ѭ��
#include <stdio.h>
int main (void)
{
    const int secret_code = 13;
    int code_entered;

    do{
        printf("To enter the triskaidekaphobia therapy club, \n");
        printf("please enter the secret code number: ");
        scanf("%d", &code_entered);
    } while (code_entered != secret_code);   //��ʱwhile �����зֺ�; ��Ϊ����һ��ѭ����
             //����ʹ��!=����ʽ ������ǵ���ѭ��,���ʱ����ѭ����
    printf("Congratulations! You are cures! \n");

    return 0;
}
/*
do
    statement
while (expression);
��testΪ�ٻ�0֮ǰ,�ظ�ִ��statement���֡�*/
