#include <stdio.h>
int main(void)
{
    char ch;
    int n_relp = 0;

    printf("Enter some texts(# to quit):\n");
    while ((ch = getchar()) != '#')
    {
        switch (ch)
        {
        case '.': ch = '!';
                  n_relp++;
                  break;
        case '!': printf("!");
                  n_relp++;
                  break;
        default : break;
        }
        printf("%c", ch);
    }
    printf("\n %d ���滻��", n_relp);
}
