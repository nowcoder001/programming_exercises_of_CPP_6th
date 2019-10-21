/*Write a program that asks the user to enter the number of days and then converts that
value to weeks and days. For example, it would convert 18 days to 2 weeks, 4 days.
Display results in the following format:
    18 days are 2 weeks, 4 days.
Use a while loop to allow the user to repeatedly enter day values; terminate the loop
when the user enters a nonpositive value, such as 0 or -20.*/

#include<stdio.h>
#define DAYS_PER_WEEK 7    //每星期的天数
int main(void)
{
    int enter;
    printf("Enter the number of days, or enter a nonpositive value to terminate the loop\n");
    scanf("%d",&enter);
    while(enter > 0)
    {
        printf("%d days are %d weeks, %d days.\n",enter,enter/DAYS_PER_WEEK,enter%DAYS_PER_WEEK);
        printf("Enter the number of days, or enter a nonpositive value to terminate the loop\n");
        scanf("%d",&enter);
    }
    
    return 0;
}