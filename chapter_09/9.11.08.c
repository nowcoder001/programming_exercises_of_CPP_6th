/*Chapter 6, “C Control Statements: Looping,” ( Listing 6.20) shows a power() function
that returned the result of raising a type double number to a positive integer value.
Improve the function so that it correctly handles negative powers. Also, build into the
function that 0 to any power other than 0 is 0 and that any number to the 0 power is 1.
(It should report that 0 to the 0 is undefined, then say it’s using a value of 1.) Use a loop.
Test the function in a program.*/

#include<stdio.h>
double power(double n, int p);
int main(void)
{
    double base;
    int index;
    double result;
    printf("Enter the base number and the index number(q to quit): \n");
    while((scanf("%lf %d",&base,&index)) == 2)
    {
    result = power(base, index);
    if(base == 0 && index == 0)
        printf("0 to the 0 is undefined, it's using a value of 1.\n");
    else
        printf("%f of the power of %d is %f\n", base, index, result);
    printf("Enter the base number and the index number(q to quit): \n");
    }
    return 0;
}

double power(double n, int p)
{
    double pow = 1;
    int i;
    if(n == 0 && p != 0)
        pow = 0;
    else if(n != 0 && p == 0)
        pow = 1;
    else if(n != 0 && p != 0)
    {
        if(p > 0)
        {
            for(i = 1; i <= p; i++)
                pow *= n;
        }
        else if(p < 0)
        {
            p = -p;
            for(i = 1; i <= p; i++)
                pow *= n;
            pow = 1 / pow;
        }
    }
    return pow;
}