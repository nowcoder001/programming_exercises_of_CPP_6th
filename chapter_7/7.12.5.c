//Redo exercise 4 using a switch.

#include<stdio.h>
#define STOP '#'

int main(void)
{
    char ch;
    int count = 0;
    printf("Enter a string of charactors with '.' and '!' inside of it(end with # to terminate): ");
    while((ch = getchar()) != STOP)
    {
        switch(ch)
        {
            case '.':
            {
                ch = '!';
                printf("%c",ch);
                count++;
                break;
            }
            case '!':
            {
                printf("%c",ch);
                printf("%c",ch);
                count++;
                break;
            }
            default:
                printf("%c",ch);
                break;
        }
    }
    printf("\nIt has made %d substitutions.",count);    
    
    return 0;
}