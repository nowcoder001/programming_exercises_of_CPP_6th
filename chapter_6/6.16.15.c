/*Write a program that reads in a line of input and then prints the line in reverse order. 
You can store the input in an array of char; assume that the line is no longer than 255 
characters. Recall that you can use scanf() with the %c specifier to read a character at 
a time from input and that the newline character ( \n) is generated when you press the 
Enter key.*/

#include<stdio.h>
int main(void)
{
    int i,j;
    char ch[254];
    printf("Enter a lime of character: \n");
    for(i = 0, j = 0; i <= 254&&scanf("%c",&ch[i]); i++, j++)
    {
        printf("%c",ch[i]);
        j = i;
    }
    printf("\n");
    printf("%d",j);
    
    return 0;
}