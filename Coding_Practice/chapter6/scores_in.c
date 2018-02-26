//强大的数组！
#include <stdio.h>
#define SIZE 10
#define PAR 72
int main (void)
{
    int index, score[SIZE];  // 数组编号从0开始 即score[10] 为score[0]-score[9]
    int sum = 0;
    float average;

    printf("Enter %d golf scores: \n", SIZE);
    for (index = 0; index < SIZE; index++)
        scanf("%d", &score[index]); //将数据储存在数组[index]中
    printf("The scores read in are as follows:\n");
    for (index = 0; index < SIZE; index++)
        printf("%5d", score[index]);
    printf("\n");
    for (index = 0; index < SIZE; index++)
        sum += score[index]; //可以将数组中的数全部加起来
    average = (float) sum / SIZE;
    printf("Sum of scores = %d, average = %.2f\n", sum, average);
    printf("That's a handicap of %.0f.\n", average - PAR);

    return 0;
}
