/*The ABC Mail Order Grocery sells artichokes for $2.05 per pound, beets for $1.15 per
pound, and carrots for $1.09 per pound. It gives a 5% discount for orders of $100 or
more prior to adding shipping costs. It charges $6.50 shipping and handling for any
order of 5 pounds or under, $14.00 shipping and handling for orders over 5 pounds
and under 20 pounds, and $14.00 plus $0.50 per pound for shipments of 20 pounds or
more. Write a program that uses a switch statement in a loop such that a response of a
lets the user enter the pounds of artichokes desired, b the pounds of beets, c the pounds
of carrots, and q allows the user to exit the ordering process. The program should keep
track of cumulative totals. That is, if the user enters 4 pounds of beets and later enters
5 pounds of beets, the program should use report 9 pounds of beets. The program then
should compute the total charges, the discount, if any, the shipping charges, and the
grand total. The program then should display all the purchase information: the cost per
pound, the pounds ordered, and the cost for that order for each vegetable, the total cost
of the order, the discount (if there is one), the shipping charge, and the grand total of all
the charges.*/

#include<stdio.h>
#define PRICE_ARTICHOKES 2.05
#define PRICE_BEETS 1.15
#define PRICE_CARROTS 1.09
#define DISCOUNT_RATE 0.05
#define SHIPCHARGE_under5 6.5
#define SHIPCHARGE_5to20 14
#define SHIPCHARGE_RATE_20more  0.5
#define SHIPCHARGE_1class 5
#define SHIPCHARGE_2class 20

int main(void)
{
    char selection;
    double w_artichokes = 0;
    double w_beets = 0;
    double w_carrots = 0;
    double w_total;
    double c_artichokes;
    double c_beets;
    double c_carrots;
    double c_total;
    double discount;
    double ship_charge;
    double final_charges;

    printf("********************************************************************\n");
    printf("Enter the charactor corresponding to the vegetable you want to buy: \n");
    printf("a) artichokes                     b) beets\n");
    printf("c) carrots                        q) quit\n");
    printf("********************************************************************\n");
    while((scanf("%c",&selection) == 1) && selection != 'q')
    {
        if(selection == '\n')
            continue;
        switch(selection)
        {
            case 'a':
            {
                printf("Enter the pounds of artichokes you want to buy: ");
                scanf("%lf",&w_artichokes);
                w_artichokes += w_artichokes;
                printf("Enter the charactor corresponding to the vegetable you want to buy: \n");
                continue;
            }
            case 'b':
            {
                printf("Enter the pounds of beets you want to buy: ");
                scanf("%lf",&w_beets);
                w_beets += w_beets;
                printf("Enter the charactor corresponding to the vegetable you want to buy: \n");
                break;
            }
            case 'c':
            {
                printf("Enter the pounds of carrots you want to buy: ");
                scanf("%lf",&w_carrots);
                w_carrots += w_carrots;
                printf("Enter the charactor corresponding to the vegetable you want to buy: \n");
                break;
            }
            case 'q':
                break;
            default:
            {
                printf("You can only enter: 'a', 'b', 'c', 'q'.\n");
                continue;
            } 
        }
    }
    c_artichokes = PRICE_ARTICHOKES * w_artichokes;
    printf("Artichokes are $%.2f per pound, you ordered %.2f pounds.\n",PRICE_ARTICHOKES,w_artichokes);
    printf("The cost of artichokes you odered are: $%.2f\n",c_artichokes);
    c_beets = PRICE_BEETS * w_beets;
    printf("Beets are $%.2f per pound, you ordered %.2f pounds.\n",PRICE_BEETS,w_beets);
    printf("The cost of beets you odered are: $%.2f\n",c_beets);
    c_carrots = PRICE_CARROTS * w_carrots;
    printf("Carrots are $%.2f per pound, you ordered %.2f pounds.\n",PRICE_CARROTS,w_carrots);
    printf("The cost of carrots you odered are: $%.2f\n",c_carrots);
    c_total = c_artichokes + c_beets + c_carrots;
    printf("The total cost of the order are: $%.2f\n",c_total);

    if(c_total >= 100)
        discount = DISCOUNT_RATE * c_total;
    else
        discount = 0;
    printf("The discount: $%.2f\n",discount);

    w_total = w_artichokes + w_beets + w_carrots;
    if(w_total <= SHIPCHARGE_1class)
        ship_charge = SHIPCHARGE_under5;
    else if(w_total <= SHIPCHARGE_2class)
        ship_charge = SHIPCHARGE_5to20;
    else
        ship_charge = SHIPCHARGE_5to20 + (w_total - SHIPCHARGE_2class) * SHIPCHARGE_RATE_20more;
        printf("The shipping charge are: $%.2f\n",ship_charge);

    final_charges = c_total - discount + ship_charge;
    printf("The grand total of all the charges are: $%.2f\n",final_charges);
    
    return 0;
}