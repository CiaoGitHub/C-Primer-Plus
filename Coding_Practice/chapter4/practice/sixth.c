#include <stdio.h>
#include <string.h>
int main(void)
{
    char firstname[40], lastname[40];

    printf("input your firstname:");
    scanf("%s", firstname);
    printf("input your lastname:");
    scanf("%s", lastname);
    printf("%s %s\n", firstname, lastname);
    printf("%*d %*d\n",
           strlen(firstname), strlen(firstname), strlen(lastname),strlen(lastname));
    /*����ʹ��������strlen()����.��һ����strlen(firstname)��ֵΪ�������ַ����ĳ��ȣ�
    ��haung��ֵΪ7����ʱ7������*����һ��strlen(firstname)��������7����������ʹ��7�Ҷ������ַ�����*/
    printf("%s %s\n", firstname, lastname);
    printf("%-*d %-*d\n",
        strlen(firstname), strlen(firstname), strlen(lastname),strlen(lastname));

    return 0;
}
