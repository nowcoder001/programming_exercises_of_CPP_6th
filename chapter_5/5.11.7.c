/*Write a program that requests a type double number and prints the value of the number
cubed. Use a function of your own design to cube the value and print it. The main()
program should pass the entered value to this function.*/

#include<stdio.h>
void cube(double num);   //函数原型

int main(void)
{
    double num;
    printf("Enter a number: ");
    scanf("%lf",&num);
    cube(num);
    
    return 0;
}
void cube(double num) 
{
    printf("The value of the number cubed is: %.2f\n",num*num*num);
}