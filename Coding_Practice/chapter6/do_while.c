// do while 循环语句的使用  先do一次先 在看看条件符不符合  称为出口条件循环
#include <stdio.h>
int main (void)
{
    const int secret_code = 13;
    int code_entered;

    do{
        printf("To enter the triskaidekaphobia therapy club, \n");
        printf("please enter the secret code number: ");
        scanf("%d", &code_entered);
    } while (code_entered != secret_code);   //此时while 后面有分号; 因为迭代一次循环了
             //并且使用!=的形式 不相等是迭代循环,相等时跳出循环。
    printf("Congratulations! You are cures! \n");

    return 0;
}
/*
do
    statement
while (expression);
在test为假或0之前,重复执行statement部分。*/
