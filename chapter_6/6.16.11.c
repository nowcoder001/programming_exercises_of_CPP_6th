//Write a program that reads eight integers into an array and then prints them in reverse order.

#include<stdio.h>
int main()
{
    int value[8];
    int i;
    printf("Enter eight integers: ");
    scanf("%d %d %d %d %d %d %d %d",&value[8]);
    for(i = 7; i >= 0; i--)
    {
        printf("%-5d",value[i]);
    }
    return 0;
}