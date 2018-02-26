#include <stdio.h>
int main(void)
{
    int true_val, false_val;

    true_val = (10 > 2);
    false_val = (10 == 2);
    printf("true = %d; false = %d \n", true_val, false_val); //表达式为真的值是1，为假的值是0

    return 0;
}
