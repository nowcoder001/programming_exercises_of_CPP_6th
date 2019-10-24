/*Write a program that reads input until encountering #. Have the program print each 
input character and its ASCII decimal code. Print eight character-code pairs per line. 
Suggestion: Use a character count and the modulus operator ( %) to print a newline 
character for every eight cycles of the loop.*/

#include<stdio.h>
#include<ctype.h>
#define STOP '#'
#define CYCLE 8
int main(void)
{
    char ch;
    int n_char = 0;
    printf("Enter text end with #: ");
    while((ch = getchar()) != STOP)     //读取字符直到'#'
    {
        
        if(!isspace(ch) && ch != '\n')  //如果不是空格和换行符执行此项
        {
            n_char++;
            printf("char: %c,ASCII: %-4d  ",ch,ch);
        }
        else
            continue;
        
        if(n_char%CYCLE == 0)   //每8个循环周期换行
            printf("\n");
    }  
    return 0;
}