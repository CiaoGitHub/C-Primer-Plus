#include <stdio.h>
int main(void)
{
    int age;
    float assets;
    char pet[30];//�ַ����飬���ڴ����ַ���
    char ch;

    printf("Enter your age, assets, and favorite pet.\n");
    scanf("%d %f", &age, &assets);/*��ȡ��������ʱ��Ҫʹ��&*/
    scanf("%s", pet);//�ַ����鲻ʹ��&
    printf("%d $%.2f %s\n", age, assets, pet);
    scanf(" %c", &ch);//����%c��scanf()��ӵ�һ���ǿհ��ַ���ȡ
    printf("%c", &ch);

    return 0;
}
