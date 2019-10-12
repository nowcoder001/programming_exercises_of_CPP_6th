//Write a program that reads eight integers into an array and then prints them in reverse order.

#include<stdio.h>
int main(void)
{
    int value[8];
    int index;
    int i;
    printf("Enter eight integers: ");
    for(i = 0; i < 8; i++)
    {
        scanf("%d",&value[i]);
    }
    for(index = 7; index >= 0; index--)
    {
        printf("%-5d",value[index]);
    }
    printf("\n");
    return 0;
}