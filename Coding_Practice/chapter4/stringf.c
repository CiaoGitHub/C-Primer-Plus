#include <stdio.h>
#define BLURB "Authentic initation!"
int main(void)
{
    printf("[%2s]\n", BLURB);
    printf("[%24s]\n", BLURB);
    printf("[%24.5s]\n", BLURB);
    printf("[%-24.5s]", BLURB);

    return 0;
}
