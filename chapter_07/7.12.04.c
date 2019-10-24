/*Using if else statements, write a program that reads input up to #, replaces each period
with an exclamation mark, replaces each exclamation mark initially present with two
exclamation marks, and reports at the end the number of substitutions it has made.*/

#include<stdio.h>
#define STOP '#'

int main(void)
{
    char ch;
    int count = 0;
    printf("Enter a string of charactors with '.' and '!' inside of it(end with # to terminate): ");
    while((ch = getchar()) != STOP)     //读入字符直到'#'
    {
        if(ch == '.')                   //'.'替换为'!'
        {
            ch = '!';
            printf("%c",ch);
            count++;
        }
        else if(ch == '!')              //'!'替换为'!!'
        {    
            printf("%c",ch);
            printf("%c",ch);
            count++;
        }
        else
            printf("%c",ch);

    }
    printf("\nIt has made %d substitutions.",count);    
    
    return 0;
}