/*Write a program that reads input until encountering the # character and then reports 
the number of spaces read, the number of newline characters read, and the number of all 
other characters read.*/

#include<stdio.h>
#include<ctype.h>
#define STOP '#'
int main(void)
{
    char ch;
    int n_space = 0;
    int n_line_ch = 0;
    int n_other_ch = 0;

    printf("Enter text (end with # to terminate): ");
    while((ch = getchar()) != STOP)     //当读取到'#'时停止循环
    {
        if(ch == '\n')                  //行
            n_line_ch++;
        else if(isspace(ch))            //空格
            n_space++;
        else                            //其他字符
            n_other_ch++;
    }
    printf("The number of spaces is %d, nweline characters is %d, number of all other characters is %d\n",n_space,n_line_ch,n_other_ch);

    return 0;
}