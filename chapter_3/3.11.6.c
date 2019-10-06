/*The mass of a single molecule of water is about 3.0×10^-23 grams. A quart of water is
about 950 grams. Write a program that requests an amount of water, in quarts, and
displays the number of water molecules in that amount.*/

#include<stdio.h>
#define MASS_OF_MOLECULE 3.0e-23
#define MASS_OF_QUART 950.0

int main(void)
{
    int quart;
    double result;
    printf("Enter the amount of water in quarts: ");
    scanf("%d",&quart);
    result = quart*MASS_OF_QUART/MASS_OF_MOLECULE;
    printf("The number of water molecules in that amount is: %e",result);
    
    return 0;
}