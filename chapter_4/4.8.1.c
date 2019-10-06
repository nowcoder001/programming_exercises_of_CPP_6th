/*Write a program that asks for your first name, your last name, and then prints the names
in the format last, first.*/

#include<stdio.h>
int main()
{
    char first_name[20];
    char last_name[20];
    printf("Enter your first name: ");
    scanf("%s",first_name);
    printf("Enter your last name: ");
    scanf("%s",last_name);
    printf("Your full name is %s %s.\n",first_name,last_name);
    
    return 0;
}