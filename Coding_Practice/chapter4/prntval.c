#include <stdio.h> /*printf()�ķ���ֵ*/
int main(void)
{
    int bph2o = 212;
    int rv;

    rv = printf("%d F is water's boiling point.\n", bph2o);/*��ӡ��Ϣ�ͱ�����ֵ ��������˿ո񼰻��з�\n��32 ch*/
    printf("The printf() function printed %d characters.\n",
            rv);/*����������Զ���Ŀհס�*/

    return 0;
}
