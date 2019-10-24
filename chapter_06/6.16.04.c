/*Use nested loops to produce the following pattern:
    A
    BC
    DEF
    GHIJ
    KLMNO
    PQRSTU
If your system doesn’t encode letters in numeric order, see the suggestion in
programming exercise 3.*/

#include<stdio.h>
int main(void)
{
    const int ROWS = 6;                     //定义行数
    int row;
    char ch;
    int i;
    for(row = 0,ch = 'A';row < ROWS;row++)  //行
    {
        
        for(i = 0;i <= row;i++)             //计数器，打印每行字符
            printf("%c",ch++);
        printf("\n");                       //每行结束换行
    }
    return 0;
}