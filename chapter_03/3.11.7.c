/*There are 2.54 centimeters to the inch. Write a program that asks you to enter your
height in inches and then displays your height in centimeters. Or, if you prefer, ask for
the height in centimeters and convert that to inches.*/

#include<stdio.h>
#define CENTI_TO_INCH 2.54        //每英寸相等的厘米数

int main(void)
{
    float height_inch;
    float result;
    printf("Enter your height in inches: ");
    scanf("%f",&height_inch);
    printf("Your height in centimeters is %f",height_inch*CENTI_TO_INCH);

    return 0;
}