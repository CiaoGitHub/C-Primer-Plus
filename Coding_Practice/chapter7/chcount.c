#include <stdio.h>
#define PERIOD '.'
int main(void)
{
    char ch;
    int charcount = 0;

    while ((ch = getchar()) != PERIOD)
    {
        if(ch != '"' && ch != '\n') //&& Óë   || »ò    £¡ ·Ç
            charcount++;
    }
    printf("There are %d non-quote characters.\n", charcount);

    return 0;
}
 // !(4 > 7)  equal to (4 <=7)   (practice && time) == perfect.
