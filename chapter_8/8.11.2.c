/*Write a program that reads input as a stream of characters until encountering EOF. Have
the program print each input character and its ASCII decimal value. Note that characters
preceding the space character in the ASCII sequence are nonprinting characters.
Treat them specially. If the nonprinting character is a newline or tab, print \n or \t,
respectively. Otherwise, use control-character notation. For instance, ASCII 1 is Ctrl+A,
which can be displayed as ^A. Note that the ASCII value for A is the value for Ctrl+A
plus 64. A similar relation holds for the other nonprinting characters. Print 10 pairs per
line, except start a fresh line each time a newline character is encountered. (Note: The
operating system may have special interpretations for some control characters and keep
them from reaching the program.)*/

#include<stdio.h>
#define DIV 10
int main(void)
{   
    int ch;
    int count = 0;
    printf("Enter characters(terminate with EOF): ");
    while((ch = getchar()) != EOF)
    {   
        count++;
        if(ch == '\n')              //读入换行符
        {
            printf("\\n, %-3d  ",ch);
            count = 0;
        }
        else if(ch == '\t')         //读入制表符
            printf("\\t, %-3d  ",ch);
        else if(ch < ' ')           //ASCII字码中小于空格的非打印字符
            printf("^%c, %-3d  ",ch + 64,ch);
        else                        //字母和其他字符
            printf("%2c, %-3d  " ,ch,ch);
        if(count % DIV == 0)             //每读入10个字符换行
        {
            printf("\n");
            count = 0;
        }
    }
    return 0;
}