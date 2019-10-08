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
    const int ROWS = 6;
    int row;
    char ch;
    int i;
    for(row = 0,ch = 'A';row < ROWS;row++)
    {
        
        for(i = 0;i <= row;i++)
            printf("%c",ch++);
        printf("\n");
    }
    return 0;
}