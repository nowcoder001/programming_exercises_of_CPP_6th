/*The mass of a single molecule of water is about 3.0×10^-23 grams. A quart of water is
about 950 grams. Write a program that requests an amount of water, in quarts, and
displays the number of water molecules in that amount.*/

#include<stdio.h>
#define mass_of_molecule 3.0e-23
#define mass_of_quart 950.0

int main()
{
    int quart;
    double result;
    printf("Enter the amount of water in quarts: ");
    scanf("%d",&quart);
    result = quart*mass_of_quart/mass_of_molecule;
    printf("The number of water molecules in that amount is: %e",result);
    return 0;
}