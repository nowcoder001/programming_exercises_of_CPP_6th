/*Devise a function chline(ch,i,j) that prints the requested character in columns i
through j. Test it in a simple driver.*/

#include<stdio.h>
void chline(char ch, int i, int j);

int main(void)
{
    char ch;
    int i, j;
    printf("Enter the character you want to print: ");
    scanf("%c",&ch);
    printf("Enter the columns you want to print through: ");
    scanf("%d %d",&i, &j);
    chline(ch, i, j);
    return 0;
}

void chline(char ch, int i, int j)
{
    int space;
    int col;
    for(space = 1; space < i; space++)
    {
        printf(" ");
    }
    for(space = i; space <= j; space++)
    {
        putchar(ch);
    }
    printf("\n");
    
}