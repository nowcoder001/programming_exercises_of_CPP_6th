//Redo Programming Exercise 8, but this time use a recursive function.

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
            if(p >= 1)
                pow = n * power(n, (p - 1));
        }
        else if(p < 0)
        {
            p = -p;
            if(p >= 1)
                pow = n * power(n, (p - 1));
            pow = 1 / pow;
        }
    }
    
    return pow;
}