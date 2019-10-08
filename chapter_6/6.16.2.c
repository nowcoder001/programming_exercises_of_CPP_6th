/*Use nested loops to produce the following pattern:
    $
    $$
    $$$
    $$$$
    $$$$$                                               */

#include<stdio.h>
int main(void)
{
    const int ROWS = 5;
    int row;
    int ch;
    for(row = 1;row <= ROWS;row++)
    {
        for(ch = 1;ch <= row;ch++)
            printf("$");
        printf("\n");
    }
    return 0;
}