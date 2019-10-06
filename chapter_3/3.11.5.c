/*There are approximately 3.156 × 10^7 seconds in a year. Write a program that requests
your age in years and then displays the equivalent number of seconds.*/

#include<stdio.h>
#define SECOND_PER_YEAR 3.156e7

int main()
{
    int age;
    double result;
    printf("Enter your age: ");
    scanf("%d",&age);
    result = age*SECOND_PER_YEAR;
    printf("The equivalent number of seconds of your age is %f.",result);

    return 0;
}