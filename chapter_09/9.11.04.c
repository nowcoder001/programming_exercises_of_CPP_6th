/*The harmonic mean of two numbers is obtained by taking the inverses of the two
numbers, averaging them, and taking the inverse of the result. Write a function that
takes two double arguments and returns the harmonic mean of the two numbers.*/

#include<stdio.h>
double harmonic(double x, double y);

int main(void)
{
    double x, y;
    printf("Enter two numbers: ");
    scanf("%lf %lf",&x ,&y);
    printf("The harmonic mean of the two numbers is: %f",harmonic(x, y));
    return 0;
}
double harmonic(double x, double y)
{
    double invers_x;
    double invers_y;
    double harmonic_num;
    invers_x = 1 / x;
    invers_y = 1 / y;
    harmonic_num = 1 /((invers_x + invers_y) / 2);
    return harmonic_num;
}