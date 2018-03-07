/*#include <stdio.h> //11-11
#include <string.h>
#include <ctype.h>
#define LIM 10
#define SIZE 80
char *s_gets(char *st, int n);
char get_choice(void);
void print_sour(char *str[], int n);
void print_ascii(char *str[], int n);
void print_length(char *str[], int n);
void print_first_word(char *str[], int n);
int first_word(char *st);

int main(void)
{
    char str[LIM][SIZE];
    char *ptr[LIM];
    int row = 0;           //输入的字符串数量
    char choice;           //用户输入的选择字符

    printf("Input some strings before EOF(no more than 10):\n");
    while(row < LIM && s_gets(str[row], SIZE) != NULL)
    {
        ptr[row] = str[row];
        row++;
    }
    while ((choice = get_choice()) != 'q')
    {
        printf("\n");
        switch (choice)
        {
            case 'a' : print_sour(ptr, row);
                        break;
            case 'b' : print_ascii(ptr, row);
                        break;
            case 'c' : print_length(ptr, row);
                        break;
            case 'd' : print_first_word(ptr, row);
                        break;
            default : printf("Error!\n");
                        break;
        }
        printf("\n");
    }
    printf("Bye.\n");

    return 0;
}
char *s_gets(char *st, int n)
{
    char *ret_val;

    ret_val = fgets(st, n, stdin);
    if(ret_val)
    {
        while (*st != '\n' && *st != '\0')
            st++;
        if (*st == '\n')
            *st = '\0';
        else
            while (getchar() != '\n')
            continue;
        return ret_val;
    }
    else
        return NULL;
}
char get_choice(void)
{
    char ch;
    printf("a. print the sourse strings.     b. print in order of ASCII.\n");
	printf("c. print in order of length.	 d. print in order of the first word's length.\n");
	printf("q. quit.\n");
	printf("Enter a character (a, b, c, d or q):");
	ch = getchar();
	while (getchar() != '\n')
        continue;
    while (ch < 'a' || ch > 'd' && ch != 'q')
    {
        printf("Please input the right option(a, b, c, d or q):");
        ch = getchar();
        while (getchar() != '\n')
            continue;
    }
    return ch;
}
void print_sour(char *str[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        puts(str[i]);
}

void print_ascii(char *str[], int n)
{
    int i, j;
    char *temp;

    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
            if (strcmp(str[i], str[j]) > 0)
            {
                temp = str[j];
                str[j] = str[i];
                str[i] = temp;
            }
    for (i = 0; i < n; i++)
        puts(str[i]);

}
void print_length(char *str[], int n)
{
    int i, j;
    char *temp;

    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
            if (strlen(str[i]) > strlen(str[j]))
            {
                temp = str[j];
                str[j] = str[i];
                str[i] = temp;
            }
    for (i = 0; i < n; i++)
        puts(str[i]);
}
void print_first_word(char *str[], int n)
{
    int i, j;
    char *temp;

    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
            if (first_word(str[i]) > first_word(str[j]))
            {
                temp = str[j];
                str[j] = str[i];
                str[i] = temp;
            }
    for (i = 0; i < n; i++)
        puts(str[i]);
}
//计算一个单词的长度
int first_word(char *st)
{
    int i = 0;
    int count = 0;

    while (!isalpha(st[i]))
        i++;
    while (isalpha(st[i]))
    {
        i++;
        count++;
    }
    return count;
}
*/
