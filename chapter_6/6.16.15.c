/*Write a program that reads in a line of input and then prints the line in reverse order. 
You can store the input in an array of char; assume that the line is no longer than 255 
characters. Recall that you can use scanf() with the %c specifier to read a character at 
a time from input and that the newline character ( \n) is generated when you press the 
Enter key.*/

#include<stdio.h>
#define elements 255

int main(void)
{
    int i,j;
    char ch[elements];
    printf("Enter a line of character: \n");
    for(i = 0; i <= 254, ch[i -1] != '\n'; i++)
    {
        scanf("%c",&ch[i]);
    }
    i -= 2;
    while(i >= 0)
        printf("%c",ch[i--]);
    printf("\n");
    return 0;
}