/*In the U.S. system of volume measurements, a pint is 2 cups, a cup is 8 ounces, an
ounce is 2 tablespoons, and a tablespoon is 3 teaspoons. Write a program that requests a
volume in cups and that displays the equivalent volumes in pints, ounces, tablespoons,
and teaspoons. Why does a floating-point type make more sense for this application than
an integer type?*/

#include<stdio.h>
#define cup_to_pint 2
#define ounce_to_cup 8
#define table_to_ounce 2
#define tea_to_table 3

int main()
{
    float volume;
    printf("Enter a volume in cups: ");
    scanf("%f",&volume);
    printf("The equivalent volumes in pints is %f\n",volume/cup_to_pint);
    printf("The equivalent volumes in ounces is %f\n",volume*ounce_to_cup);
    printf("The equivalent volumes in tablespoons is %f\n",volume*ounce_to_cup*table_to_ounce);
    printf("The equivalent volumes in teaspoons is %f\n",volume*ounce_to_cup*table_to_ounce*tea_to_table);
    return 0;
}