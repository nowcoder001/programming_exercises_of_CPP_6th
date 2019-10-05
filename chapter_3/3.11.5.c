/*There are approximately 3.156 × 10^7 seconds in a year. Write a program that requests
your age in years and then displays the equivalent number of seconds.*/

#include<stdio.h>
#define second_per_year 3.156e7

int main()
{
    int age;
    double result;
    printf("Enter your age: ");
    scanf("%d",&age);
    result = age*second_per_year;
    printf("The equivalent number of seconds of your age is %f.",result);

    return 0;
}