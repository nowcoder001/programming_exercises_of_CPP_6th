/*Write a program that requests your height in inches and your name, and then displays
the information in the following form:
    Dabney, you are 6.208 feet tall
Use type float, and use / for division. If you prefer, request the height in centimeters
and display it in meters.*/

#include<stdio.h>
#define centi_to_meter 100
int main()
{
    char name[20];
    float height;
    printf("Enter your name: ");
    scanf("%s",name);
    printf("Enter your height in centimeters: ");
    scanf("%f",&height);
    printf("%s, your are %.3f meters tall.",name,height/centi_to_meter);
    return 0;
}