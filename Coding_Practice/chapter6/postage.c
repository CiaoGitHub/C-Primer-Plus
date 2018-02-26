#include <stdio.h>
int main (void)
{
    const int FIRST_OZ = 46;
    const int NEXT_OZ = 20;
    int ounces, cost;

    printf(" ounces cost\n");
    for (ounces = 1, cost = FIRST_OZ; ounces <= 16; ounces++, cost += NEXT_OZ) //for语句中使用逗号运算符
    //从左至右求值
        printf("%5d $%4.2f\n", ounces, cost / 100.0);

    return 0;
}
 //组合赋值运算符与普通赋值的优先级相同，都比算术运算符的优先级低。
 //如 contents *= old_rate + 1.2  相当于 contents = content * (old_rate + 1.2)
