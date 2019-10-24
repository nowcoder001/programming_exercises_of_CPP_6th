/*Use nested loops to produce the following pattern:
    F
    FE
    FED
    FEDC
    FEDCB
    FEDCBA
Note: If your system doesn’t use ASCII or some other code that encodes letters in
numeric order, you can use the following to initialize a character array to the letters of
the alphabet:
char lets[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
Then you can use the array index to select individual letters; for example, lets[0] is
'A', and so on.*/

#include<stdio.h>

int main(void)
{
    const int ROWS = 6;         //行数
    const int CH = 6;           //每行的字符数
    int row;
    int ch;

    for(row = 0;row < ROWS;row++)               //行
    {
        for(ch = 'F';ch >= 'F' - row;ch--)      //减法计数器，每行字符倒序打印
        {
            printf("%c",ch);
        }
        printf("\n");           //每行结束换行
    }
    return 0;
}