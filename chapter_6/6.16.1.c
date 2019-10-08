/*Write a program that creates an array with 26 elements and stores the 26 lowercase
letters in it. Also have it show the array contents.*/

#include<stdio.h>
int main(void)
{
    char ch[26];
    int i;
    for(i = 0;i < 26;i++)
    {
        ch[i] = 'a' + i;
        printf("%c\n",ch[i]);
    }
    return 0;
}