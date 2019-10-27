/*Write a program that reads characters from the standard input to end-of-file. For each
character, have the program report whether it is a letter. If it is a letter, also report
its numerical location in the alphabet. For example, c and C would both be letter 3.
Incorporate a function that takes a character as an argument and returns the numerical
location if the character is a letter and that returns –1 otherwise.*/

#include<stdio.h>
int takechar(char alpha);
int main(void)
{
    char ch;
    int alpha;
    while((ch = getchar()) != EOF)
    {
        if(ch == '\n')
            continue;
        alpha = takechar(ch);
        if(alpha == -1)
            printf("%c isn't a character.\n",ch);
        else
            printf("The numberical location in the alphabet of %c is %d.\n", ch, alpha);
    }
    return 0;
}
int takechar(char alpha)
{   
    if(alpha >= 'a' && alpha <= 'z')
        alpha = alpha -'a' + 1;
    else if(alpha >= 'A' && alpha <= 'Z')
        alpha = alpha - 'A' + 1;
    else
        alpha = -1;
    return alpha;
}