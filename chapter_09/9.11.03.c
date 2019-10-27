/*Write a function that takes three arguments: a character and two integers. The character
is to be printed. The first integer specifies the number of times that the character is to
be printed on a line, and the second integer specifies the number of lines that are to be
printed. Write a program that makes use of this function.*/

#include<stdio.h>
void function(char ch, int i, int j);

int main(void)
{
    char ch;
    int i, j;
    printf("Enter the character you want to print: ");
    scanf("%c",&ch);
    printf("Enter the lines and columns you want to print through: ");
    scanf("%d %d",&i, &j);
    function(ch, i ,j);
    return 0;
}

void function(char ch, int i, int j)
{
    int line;
    int col;
    for(line = 0; line < i; line++)
    {
        for(col = 0; col < j; col++)
        {
            putchar(ch);
        }
        printf("\n");
    }
}