#include <stdio.h>
#include <string.h>
int main(void)
{
    char firstname[40], lastname[40];
    int width;

    printf("please enter your firstname: ");
    scanf("%s", firstname);
    printf("please enter your lastname: ");
    scanf("%s", lastname);
    printf("Your name is \"%s %s\"", firstname, lastname);
    printf("\"%+20s %s\"", firstname, lastname);
    printf("\"%-20s %-s\"", firstname, lastname);
    width = strlen(lastname) + 3;
    printf("%*s\n", width, lastname);

    return 0;
}
