#include <stdio.h>
int main(void)
{
    int y = 2, n = 3, nextnum;

    nextnum = (y + n++)*6; //递增和递减运算符只能影响一个 可修改 的左值 故，结果为(2 + 3)*6.
    printf("%d\n", nextnum); //n 的值只有在被使用之后才会递增为4.

    int ans, num = 10;

    ans = num / 2 + 5 * (1 + num++);
    printf("%d\n", ans);

    int mice;

    mice = 1.6 + 1.7;
    mice = (int)1.6 + (int)1.7; //强制类型转换运算符 圆括号和它括起来的类型
    printf("%d", mice);
    return 0;

}
