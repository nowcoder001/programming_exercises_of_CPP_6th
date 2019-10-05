/*Write a program that asks you to enter an ASCII code value, such as 66, and then prints
the character having that ASCII code.*/

#include<stdio.h>
int main()
{
    int value;
    printf("Enter an ASCII code value: ");
    scanf("%d",&value);
    printf("%c",value);

    return 0;
}