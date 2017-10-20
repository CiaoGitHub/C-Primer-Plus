#include <stdio.h>
#define PAGES 336
#define WORDS 65618
int main(void)
{
    short num = PAGES;
    short mnum = -PAGES;
    printf("num as short and unsigned short: %hd %hu\n", num, num);
    printf("-num as short and unsigned short: %hd %hu\n", mnum, mnum);/*结果为-336 65200 -336表示有符号的int 65300表示无符号的int*/
    printf("num as int and char : %d %c\n", num, num);/* num用%c打出来为P 用336/256余 80对应P*/
    printf("WORDS as int, shot, and char: %d %hd %c \n", WORDS, WORDS, WORDS);

    return 0;

}
