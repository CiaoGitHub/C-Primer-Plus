/*#include <stdio.h>    //11-12
#include <ctype.h>
int main(void)
{
    char ch;
    int word = 0, upper = 0, lower = 0;
    int punct = 0, digit = 0, inword = 0;

    while ((ch = getchar()) != EOF)
    {
        if (!isspace(ch) && (!ispunct(ch)) && !inword)
        {
            inword = 1;
            word++;
        }
        if (isspace(ch) || ispunct(ch) && inword)
        {
            inword = 0;
        }
        if (isupper(ch))
            upper++;
        if (islower(ch))
            lower++;
        if (ispunct(ch))
            punct++;
        if (isdigit(ch))
            digit++;

    }
    printf("words: %d, upper: %d, lower: %d, punct: %d, digit: %d.\n",
			word, upper, lower, punct, digit);
    return 0;
}

//计算单词个数

for (i = 0; a[i] != '\0'; i++)
{
    if ((a[i] >= 'a' && a[i] <= 'z')) || (a[i] >= 'A' && a[i] <= 'Z')) //if (isalpha(a[i]))
    {
        do
        {
        i++;
        }
        while ((a[i] >= 'a' && a[i] <= 'z')) || (a[i] >= 'A' && a[i] <= 'Z'));
        num++;
    }
}
*/
