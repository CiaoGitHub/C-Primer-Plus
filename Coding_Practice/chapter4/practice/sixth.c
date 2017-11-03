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
    /*这里使用了两个strlen()函数.第一个是strlen(firstname)的值为你输入字符串的长度，
    如haung的值为7，此时7代替了*，再一个strlen(firstname)则输出结果7。这样可以使得7右对齐与字符串。*/
    printf("%s %s\n", firstname, lastname);
    printf("%-*d %-*d\n",
        strlen(firstname), strlen(firstname), strlen(lastname),strlen(lastname));

    return 0;
}
