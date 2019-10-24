/*Write a program that asks for your first name, your last name, and then prints the names
in the format last, first.*/

#include<stdio.h>
int main(void)
{
    char first_name[20];
    char last_name[20];
    printf("Enter your first name: ");
    scanf("%s",first_name);           //读入字符串，参数前不用加&
    printf("Enter your last name: ");
    scanf("%s",last_name);            //读入字符串，参数前不用加&
    printf("%s,%s.\n",last_name,first_name);
    
    return 0;
}