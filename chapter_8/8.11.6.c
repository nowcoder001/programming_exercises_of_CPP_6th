/*Modify the get_first() function of Listing 8.8 so that it returns the first
non-whitespace character encountered. Test it in a simple program.*/

#include<stdio.h>
char get_first(void);
int main(void)
{
    char first_ch;
    printf("Enter characters: ");
    first_ch = get_first();
    printf("The first non-whitespace is ");
    putchar(first_ch);
    return 0;
}
char get_first(void)
{
    int ch;
    while((ch = getchar()) == ' ' || ch == '\n' || ch == '\t')
        continue;
    while(getchar() != '\n')
        continue;
    return ch;
}
