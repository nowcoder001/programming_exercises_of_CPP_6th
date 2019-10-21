//Modify exercise 8 so that it uses a function to return the value of the calculation.

#include<stdio.h>
void return_value(double num1,double num2);

int main(void)
{
    double num1;
    double num2;

    printf("Enter two floating-point number: \n");
    while(scanf("%lf %lf",&num1,&num2) == 2)             //当成功读入两个数时执行循环
    {
        return_value(num1,num2);
        printf("Enter two floating-point number: \n");
    }
    
    return 0;
}

void return_value(double num1,double num2)
{
    printf("The value of their difference divided by their product is: %f\n",(num1 - num2)/(num1 * num2));
}