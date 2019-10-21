/*Write a program that prints a table with each line giving an integer, its square, and its
cube. Ask the user to input the lower and upper limits for the table. Use a for loop.*/

#include<stdio.h>
int main(void)
{
    int upper;
    int lower;
    int num;
    printf("Enter the lower limites for the table: ");
    scanf("%d",&lower);
    printf("Enter the upper limites for the table: ");
    scanf("%d",&upper);
    printf("integer     square      cube        \n");
    for(num = lower; num <= upper; num++)
    {
        printf("%-12d%-12d%-12d\n",num,num*num,num*num*num);
    }
    return 0;
}