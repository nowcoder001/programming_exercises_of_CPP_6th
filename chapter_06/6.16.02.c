/*Use nested loops to produce the following pattern:
    $
    $$
    $$$
    $$$$
    $$$$$                                               */

#include<stdio.h>
int main(void)
{
    const int ROWS = 5;             //定义行数
    int row;
    int ch;
    for(row = 1;row <= ROWS;row++)  //行
    {
        for(ch = 1;ch <= row;ch++)  //每行的字符
            printf("$");
        printf("\n");               //每行结束换行
    }
    return 0;
}