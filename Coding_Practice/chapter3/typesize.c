#include<stdio.h>
int main(void)
{
    /* C99  Ϊ���ʹ�С�ṩ%zdת��˵��*/
    printf("Type int has a size of %u bytes.\n", sizeof(int));
    printf("Type char has a size of %u bytes.\n", sizeof(char));
    printf("Type long has a size of %u bytes.\n", sizeof(long));
    printf("Type long long has a size of %u bytes.\n", sizeof(long long));
    printf("Type double has a size of %u bytes.\n", sizeof(double));
    printf("Type long double has a size of %u bytes.\n", sizeof(long double));

    return 0;
}
