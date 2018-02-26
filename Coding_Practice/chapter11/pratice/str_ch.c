
/*#include <stdio.h>
#include <string.h>
#define QUIT "quit"
#define SIZE 80
//搜索字符在字符串中首次出现的位置
char * str_ch(char * st, char c);
int main(void)
{
	char str[SIZE];
	char ch;
	char * ret_val;

	printf("Input a string (type quit to quit):\n");
	gets(str);
	while (strcmp(str, QUIT))
	{
		printf("Input a character: ");
		scanf("%c", &ch);

		while (getchar() != '\n')		//跳过剩余输入部分
			continue;
		ret_val = str_ch(str, ch);
		if (ret_val)
			printf("Find! The string start with the %c:\n"
			"%s\n", ch, ret_val);
		else
			printf("Can't find!\n");
		printf("Input a string (type quit to quit):\n");
		gets(str);
	}
	printf("Bye.\n");

	return 0;
}



char * str_ch(char * st, char c)
{
	int flag = 0;
	int count = 0;
	int length = 0;
    length = strlen(st);
    printf("length: %d\n", length);
	while (count++ < length)
	{
        printf("count: %d", count);
        printf("st: %c\n", *st);
        printf("c: %c\n", c);
        if(*st++ == c)
        {
            flag = 1;
            break;
        }
	}
    if (flag)
        return st - 1;
    else
        return NULL;
}
*/
