//Devise a program that counts the number of characters in its input up to the end of file.

#include<stdio.h>
int main(void)
{
    int count = 0;
    int ch;
    printf("Enter characters(End with EOF): ");
    while((ch = getchar()) != EOF)      //从缓冲区读取输入直到EOF
    {
        if(ch == '\n')                  //忽略换行符
            continue;
        count++;
    }
    printf("The number of characters in its input is: %d",count);
}