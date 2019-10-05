/*There are 2.54 centimeters to the inch. Write a program that asks you to enter your
height in inches and then displays your height in centimeters. Or, if you prefer, ask for
the height in centimeters and convert that to inches.*/

#include<stdio.h>
#define centi_to_inch 2.54

int main()
{
    float height_inch;
    float result;
    printf("Enter your height in inches: ");
    scanf("%f",&height_inch);
    printf("Your height in centimeters is %f",height_inch*centi_to_inch);

    return 0;
}