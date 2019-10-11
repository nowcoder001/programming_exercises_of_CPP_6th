//Modify exercise 8 so that it uses a function to return the value of the calculation.

#include<stdio.h>
void return_value(int i,int j,double num1,double num2);

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
        return_value(i,j,num1,num2);
    }   while(i != 0||j != 0);
    return 0;
}
void return_value(int i,int j,double num1,double num2)
{
    while(i != 0&&j != 0)
        {
            printf("The value of their difference divided by their product is: %f\n",(num1 - num2)/(num1 * num2));
            break;
        }
}