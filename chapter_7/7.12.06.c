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
        if(ch == 'e')                           //读入'e'时，prev_ch赋值为'e'
            prev_ch = ch;
        else if(ch == 'i' && prev_ch == 'e')    //读入'i'时，且prev_ch = e即前一个字符为'e'时，计数器加1
        {
            ei_count++;
            prev_ch = ch;
        }
        else                                    //既非'e'也非'i'时
            prev_ch = ch;
    }
    printf("The number of times that the sequence ei occurs is %d\n",ei_count);
    return 0;
}