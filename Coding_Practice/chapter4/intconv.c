#include <stdio.h>
#define PAGES 336
#define WORDS 65618
int main(void)
{
    short num = PAGES;
    short mnum = -PAGES;
    printf("num as short and unsigned short: %hd %hu\n", num, num);
    printf("-num as short and unsigned short: %hd %hu\n", mnum, mnum);/*���Ϊ-336 65200 -336��ʾ�з��ŵ�int 65300��ʾ�޷��ŵ�int*/
    printf("num as int and char : %d %c\n", num, num);/* num��%c�����ΪP ��336/256�� 80��ӦP*/
    printf("WORDS as int, shot, and char: %d %hd %c \n", WORDS, WORDS, WORDS);

    return 0;

}
