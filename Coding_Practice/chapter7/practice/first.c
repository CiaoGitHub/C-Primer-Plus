#include <stdio.h>
int main(void)
{
    char ch;
    int n_space = 0;    // �ո���
    int n_newline = 0;  // ������
    int n_others = 0;   // �����ַ���

    printf("Enter some text, enter # to quit.\n");
    while ((ch = getchar()) != '#')
    {
        if (ch == ' ')
            n_space++;
        if (ch == '\n')
            n_newline++;
        else
            n_others++;
    }
    printf("Space:%d, newline:%d, n_other:%d\n",
           n_space, n_newline, n_others);

    return 0;

}
