/*Write and test a function that takes the addresses of three double variables as arguments
and that moves the value of the smallest variable into the first variable, the middle value
to the second variable, and the largest value into the third variable.*/

#include<stdio.h>
void interchange(double *l, double *m, double *s);

int main(void)
{
    double s, m, l;
    printf("Enter three numbers: ");
    scanf("%lf %lf %lf",&l, &m, &s);
    interchange(&l, &m, &s);
    printf("%f %f %f",l, m, s);
    
    return 0;
}

void interchange(double *l, double *m, double *s)
{
    double temp;
    if(*l < *m)
    {
        temp = *l;
        *l = *m;
        *m = temp;
    }
    if(*l < *s)
    {
        temp = *l;
        *l = *s;
        *s = temp;
    }
    if(*m < *s)
    {
        temp = *m;
        *m = *s;
        *s = temp;
    }
}