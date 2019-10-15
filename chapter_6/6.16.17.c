/*Chuckie Lucky won a million dollars (after taxes), which he places in an account that 
earns 8% a year. On the last day of each year, Chuckie withdraws $100,000. Write a 
program that finds out how many years it takes for Chuckie to empty his account.*/

#include<stdio.h>
#define bonus 1000000
#define interest 0.08
int main(void)
{
    int years = 0;
    int beginning_of_year;
    int end_of_year;
    beginning_of_year = bonus;
    do
    {
        years++;
        end_of_year = (beginning_of_year - 100000) + (beginning_of_year) * interest;
        beginning_of_year = end_of_year;
    } while (end_of_year >= 0);
    printf("It takes %d years for Chuckie to empty his account.\n",years);
    
    return 0;
}