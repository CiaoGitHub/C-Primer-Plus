/*#include <stdio.h>    //11-10
#define SIZE 40
char * s_gets(char * st, int n);
void delete_space(char *st);
int main(void)
{
    char str[SIZE];
    while (*s_gets(str, SIZE) != '\n')
        delete_space(str);
    printf("Bye!\n");

    return 0;
}

void delete_space(char *st)
{
    int i;
    char *p = st;

    printf("\nThe original string is :\n");
    puts(st);
    while (*st)
    {
        //��������ո񣬺��������ַ���ǰ��һ��
        if (*st == ' ')
            for (i = 0; st[i] != '\0'; i++)
            st[i] = st[i + 1];
        else
            st++;
    }
    printf("Now, the string is:\n");
	puts(p);
	printf("\n");
}
void delete_space(char st)
//�Զ�����ַ������뺯��
char * s_gets(char * st, int n)
{
	int i = 0;

	printf("Input the first string (blank line to quit):\n");
	if (fgets(st, n, stdin) != NULL && st[0] != '\n')	//������ֵst������NULL
	{
		while (st[i] != '\n' && st[i] != '\0')
			i++;
		if (st[i] == '\n')
			st[i] = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return st;
}
*/
