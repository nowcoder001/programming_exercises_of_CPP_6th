/*Write a program that requests two floating-point numbers and prints the value of their 
difference divided by their product. Have the program loop through pairs of input values 
until the user enters nonnumeric input.*/

#include<stdio.h>
int main(void)
{
    double num1;
    double num2;
    int i,j;
    printf("Enter two floating-point number: \n");
    while(scanf("%lf %lf",&num1,&num2) == 2)             //当成功读入两个数时执行循环
    {
        printf("The value of their difference divided by their product is: %f\n",(num1 - num2)/(num1 * num2));
        printf("Enter two floating-point number: \n");
    }
    return 0;
}