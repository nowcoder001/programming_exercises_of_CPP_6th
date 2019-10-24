/*Write a program that requests your height in inches and your name, and then displays
the information in the following form:
    Dabney, you are 6.208 feet tall
Use type float, and use / for division. If you prefer, request the height in centimeters
and display it in meters.*/

#include<stdio.h>
#define CENTI_TO_METER 100    //每米包含的厘米数
int main(void)
{
    char name[20];
    float height;
    printf("Enter your name: ");
    scanf("%s",name);
    printf("Enter your height in centimeters: ");
    scanf("%f",&height);
    printf("%s, your are %.3f meters tall.",name,height/CENTI_TO_METER);
    return 0;
}