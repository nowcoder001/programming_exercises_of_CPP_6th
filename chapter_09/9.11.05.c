/*Write and test a function called larger_of() that replaces the contents of two double
variables with the maximum of the two values. For example, larger_of(x,y) would
reset both x and y to the larger of the two.*/

#include<stdio.h>
void larger_of(double *x, double *y);

int main(void)
{
    double x, y;
    printf("Enter two numbers: ");
    scanf("%lf %lf",&x ,&y);
    larger_of(&x ,&y);
    printf("The maximum of the two values are: %f %f",x ,y);
    return 0;
}

void larger_of(double *x, double *y)
{
    if (*x > *y)
        *y = *x;
    else
        *x = *y;
}