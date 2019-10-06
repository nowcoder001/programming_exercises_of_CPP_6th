/*Write a program that converts time in minutes to time in hours and minutes. Use
#define or const to create a symbolic constant for 60. Use a while loop to allow the
user to enter values repeatedly and terminate the loop if a value for the time of 0 or less
is entered.*/

#include <stdio.h>

int main()
{
    int const MIN_TO_HOUR = 60;
    int min_input;
    int hour;
    int minite;
    min_input = 1;

    while(min_input>0)
    {
        printf("Enter the time in minutes, "
        "or terminate the loop if a value for the time of 0 or less is entered : \n");
        scanf("%d",&min_input);
        hour = min_input/MIN_TO_HOUR;
        minite = min_input%MIN_TO_HOUR;
        printf("The minite you enter is %d hours and %d minites\n",hour,minite);

    }
    
    return 0;
}