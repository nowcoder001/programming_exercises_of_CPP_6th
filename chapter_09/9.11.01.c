/*Devise a function called min(x,y) that returns the smaller of two double values. Test
the function with a simple driver.*/

#include<stdio.h>
double min(double * x, double * y);

int main(void)
{
    double x;
    double y;
    printf("Enter two double number, the program will return the smaller one: ");
    scanf("%lf %lf",&x, &y);
    printf("The smaller number is: %f",min(& x, & y));
    return 0;
}

double min(double * x, double * y)
{
    if(* x < * y)
        return * x;
    else
        return * y;
}