/*Write a program that creates an array with 26 elements and stores the 26 lowercase
letters in it. Also have it show the array contents.*/

#include<stdio.h>
int main(void)
{
    char ch[26];             //创建26元素数组
    int i;
    for(i = 0;i < 26;i++)    //循环计数器
    {
        ch[i] = 'a' + i;         //赋值
        printf("%c\n",ch[i]);    //打印
    }
    return 0;
}