#include <stdio.h>
int main(void)
{
    int numbers;
    int x =0, y = 0;
    int sum_even = 0, sum_odd = 0;

    scanf("%d", &numbers);
    while (numbers != 0)
    {
        if (numbers % 2 == 0)
            {
                x++;
                sum_even += numbers;
            }
        else
            {
                y++;
                sum_odd += numbers;
            }
        scanf("%d", &numbers);

    }
    printf("ż���ĸ�������ƽ��ֵ�ֱ�Ϊ: %d %.2f",
               x, (numbers == 0) ? 0 : (float)sum_even / x);
    printf("�����ĸ�������ƽ��ֵ�ֱ�Ϊ: %d %.2f",
               y, (numbers == 0) ? 0 : (float)sum_odd / y);
    return 0;
}
