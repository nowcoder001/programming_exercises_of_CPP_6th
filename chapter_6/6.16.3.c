/*Use nested loops to produce the following pattern:
    F
    FE
    FED
    FEDC
    FEDCB
    FEDCBA                                           */

#include<stdio.h>

int main(void)
{
    const int ROWS = 6;
    const int CH = 6;
    int row;
    int ch;

    for(row = 0;row < ROWS;row++)
    {
        for(ch = 'F';ch >= 'F' - row;ch--)
        {
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}