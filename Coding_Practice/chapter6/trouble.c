#include <stdio.h>
int main(void)
{
    long num;
    long sum = 0L;
    int status;

    printf("Please enter an integer to e summed ");
    printf("(q to quit): ");
    status = scanf("%ld", &num);
    while (status == 1) //����== �� = �ᵼ������ѭ�� Ӧ����
    {
        sum = sum + sum;
        printf("Please enter next integer (q to quit): ");
        status = scanf("%ld", &sum);
    }
    printf("Those integers sum to %ld.\n", num);

    return 0;
}
