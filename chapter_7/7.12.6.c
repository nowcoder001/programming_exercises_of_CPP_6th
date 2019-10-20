/*Write a program that reads input up to # and reports the number of times that the
sequence ei occurs.
Note:The program will have to “remember” the preceding character as well as the current character.
Test it with input such as “Receive your eieio award.”*/

#include<stdio.h>
#define STOP '#'

int main(void)
{
    int ei_count = 0;
    char ch;
    char prev_ch;
    printf("Enter text that end with #: ");
    prev_ch = '\n';
    while((ch = getchar()) != '#')
    {
        if(ch == 'e')
            prev_ch = ch;
        else if(ch == 'i' && prev_ch == 'e')
        {
            ei_count++;
            prev_ch = ch;
        }
        else
            prev_ch = ch;
    }
    printf("The number of times that the sequence ei occurs is %d\n",ei_count);
    return 0;
}