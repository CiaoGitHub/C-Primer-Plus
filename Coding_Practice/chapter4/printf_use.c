#include <stdio.h>
int main(void)
{
    int va11 = 12, va12 = 234, va13 = 1222;
    float distance = 10.222;
    printf("%d %d %d\n", va11, va12,va13);
    printf("%9d %9d %9d\n", va11, va12, va13);
    printf("Count Beppo ran %.2f miles in 3 hours.\n", distance);
    printf("Count Beppo ran %10.2f miles in 3 hours.\n", distance);//

}
