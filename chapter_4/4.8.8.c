/*Write a program that asks the user to enter the number of miles traveled and the number
of gallons of gasoline consumed. It should then calculate and display the miles-per-gallon
value, showing one place to the right of the decimal. Next, using the fact that one gallon
is about 3.785 liters and one mile is about 1.609 kilometers, it should convert the 
mileper-gallon value to a liters-per-100-km value, the usual European way of expressing fuel
consumption, and display the result, showing one place to the right of the decimal. Note
that the U. S. scheme measures the distance traveled per amount of fuel (higher is better),
whereas the European scheme measures the amount of fuel per distance (lower is better).
Use symbolic constants (using const or #define) for the two conversion factors.*/

#include<stdio.h>

int main()
{
    const float gallon_to_liter = 3.785;
    const float mile_to_kilometer = 1.609;
    float traveled_miles;
    float traveled_kilometers;
    float gasoline_gallons;
    float gasoline_liters;

    printf("Enter the number of miles traveled: ");
    scanf("%f",&traveled_miles);
    printf("Enter the number of gallons of gasoline consumed: ");
    scanf("%f",&gasoline_gallons);
    printf("The miles-per-gallon Value: %.1f\n",traveled_miles/gasoline_gallons);

    traveled_kilometers = traveled_miles*mile_to_kilometer;
    gasoline_liters = gasoline_gallons*gallon_to_liter;

    printf("The liter-per-100-km value: %.1f\n",gasoline_liters/traveled_kilometers*100);



}