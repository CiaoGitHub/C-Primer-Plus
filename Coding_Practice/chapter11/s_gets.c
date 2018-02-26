#include <stdio.h>
#include <string.h>
char *s_gets(char *p, int n);
int main(void)
{

}
char *s_gets(char *p, int n)
{
    char *ret_val, *find;
    int i = 0;

    ret_val = fgets(p, n, stdin);
    
    if (ret_val)
    {
        find = strchr(p, '\n');
        if (find)
            *find = '\0';
        else 
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}
 