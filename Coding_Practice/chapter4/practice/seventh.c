#include <stdio.h>
#include <float.h>
int main(void)
{
    double a = 1.0/3.0;
    float b = 1.0/3.0;

    printf("%.6f %.6f\n", a, b);
    printf("%.12f %.12f\n", a, b);
    printf("%.16f %.16f\n", a, b);
    printf("DBL_DIG:%.12f\n", DBL_DIG);
    printf("FLT_DIG:%.12f\n", FLT_DIG);

    return 0;

}
