/*#include <stdio.h>
#include <stdlib.h>
int main()
{
    char a[80];
    int i,num=0;
    gets(a);
    for(i=0; a[i]!='\0'; i++) //����Ӧ�ü�鵽��β,�ַ�����������'\0'
    {
        if ( (a[i] >='a' && a[i] <='z') || (a[i] >='A' && a[i] <='Z') ) //�������ĸ����һֱ�ҵ�����ĸ���ָ���:���ţ��ո�ȣ�
        {
            do
            {
                i++ ;
            }
            while ( (a[i] >='a' && a[i] <='z') || (a[i] >='A' && a[i] <='Z') );
//��¼һ������
            num++;
        }
    }
    printf("%d\n",num);
    return 0;
}
*/
