/*Write a program that sets a type double variable to 1.0/3.0 and a type float variable
to 1.0/3.0. Display each result three times—once showing four digits to the right of the
decimal, once showing 12 digits to the right of the decimal, and once showing 16 digits
to the right of the decimal. Also have the program include float.h and display the
values of FLT_DIG and DBL_DIG. Are the displayed values of 1.0/3.0 consistent with these
values?*/

#include<stdio.h>
#include<float.h>

int main(void)
{
    double num1 = 1.0/3.0;
    float num2 = 1.0/3.0;
    printf("double: %.4f %.12f %.16f\n",num1,num1,num1);
    printf("float:  %.4f %.12f %.16f\n",num2,num2,num2);
    printf("DBL_DIG: %d\nFLT_DIG: %d",DBL_DIG,FLT_DIG);

    return 0;
}