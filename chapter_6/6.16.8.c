/*Write a program that requests two floating-point numbers and prints the value of their 
difference divided by their product. Have the program loop through pairs of input values 
until the user enters nonnumeric input.*/

#include<stdio.h>
int main(void)
{
    double num1;
    double num2;
    int i,j;
    do
    {
        printf("Enter a floating-point number: \n");
        i = scanf("%lf",&num1);
        printf("Enter another floating-point number: \n");
        j = scanf("%lf",&num2);
        while(i != 0&&j != 0)
        {
            printf("The value of their difference divided by their product is: %f\n",(num1 - num2)/(num1 * num2));
            break;
        }
    }   while(i != 0||j != 0);
    return 0;
}