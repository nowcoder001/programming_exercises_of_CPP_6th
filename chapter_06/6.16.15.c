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
    for(i = 0; i <= 254, ch[i-1] != '\n'; i++)  /*每次循环读入一个字符，直到回车产生的换行符为止.
                                                ch[i-1] != '\n'为对上次循环赋值给数组的值进行判断是否到达字符串结尾*/
    {
        scanf("%c",&ch[i]);
    }
    i -= 2;                                      //将i定位回数组最后一个赋值为字符的元素，因为此时实际位置偏后2
    while(i >= 0)
        printf("%c",ch[i--]);

    return 0;
}