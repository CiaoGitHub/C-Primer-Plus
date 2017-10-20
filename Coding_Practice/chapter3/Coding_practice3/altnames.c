#include <stdio.h>
#include <inttypes.h>
int main(void)
{
    int32_t me32;
    float noah, jonah;
    double trouble;
    float planck = 6.63e-34;
    long double gnp;

    me32 = 45933945;
    printf("First, assume int32_t is int:");
    printf("me32 = %d\n", me32);
    printf("Next, let's not make any assumption.\n");
    printf("Instead, use a \"macro\" from inttypes.h");
    printf("me32 = %" PRId32 "\n", me32);

    return 0;
}

