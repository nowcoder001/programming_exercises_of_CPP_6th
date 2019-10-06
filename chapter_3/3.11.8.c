/*In the U.S. system of volume measurements, a pint is 2 cups, a cup is 8 ounces, an
ounce is 2 tablespoons, and a tablespoon is 3 teaspoons. Write a program that requests a
volume in cups and that displays the equivalent volumes in pints, ounces, tablespoons,
and teaspoons. Why does a floating-point type make more sense for this application than
an integer type?*/

#include<stdio.h>
#define CUP_TO_PINT 2
#define OUNCE_TO_CUP 8
#define TABLE_TO_OUNCE 2
#define TEA_TO_TABLE 3

int main()
{
    float volume;
    printf("Enter a volume in cups: ");
    scanf("%f",&volume);
    printf("The equivalent volumes in pints is %f\n",volume/CUP_TO_PINT);
    printf("The equivalent volumes in ounces is %f\n",volume*OUNCE_TO_CUP);
    printf("The equivalent volumes in tablespoons is %f\n",volume*OUNCE_TO_CUP*TABLE_TO_OUNCE);
    printf("The equivalent volumes in teaspoons is %f\n",volume*OUNCE_TO_CUP*TABLE_TO_OUNCE*TEA_TO_TABLE);
    return 0;
}