/*The 1988 United States Federal Tax Schedule was the simplest in recent times. It had
four categories, and each category had two rates. Here is a summary (dollar amounts are
taxable income):

Category                    Tax
Single                      15% of first $17,850 plus 28% of excess
Head of Household           15% of first $23,900 plus 28% of excess
Married, Joint              15% of first $29,750 plus 28% of excess
Married, Separate           15% of first $14,875 plus 28% of excess

For example, a single wage earner with a taxable income of $20,000 owes 0.15 × $17,850
+ 0.28 × ($20,000−$17,850). Write a program that lets the user specify the tax category
and the taxable income and that then calculates the tax. Use a loop so that the user can
enter several tax cases.*/

#include<stdio.h>
#define RATE_1 0.15
#define RATE_2 0.28

int main(void)
{
    int selection;
    double taxable_income = 0;
    double tax = 0;
    printf("Enter the number corresponding to the selection: \n");
    printf("1) Single               2) Head of Household\n");
    printf("3) Married, Joint       4) Married, Separate\n");
    printf("5) quit\n");
    
    while(scanf("%d",&selection) == 1 && selection != 5)
    {
        if(selection > 5 || selection < 1)                  //判断输入是否为选项中的数，否则重新输入
        {
            printf("You can only enter number 1 to 5\n");
            continue;
        }
        printf("Enter the income: ");
        if(scanf("%lf",&taxable_income) != 1)               //判断输入的收入是否为数字，否则重新输入
        {
            printf("You can only enter numbers!\n");
        }
        switch(selection)
        {
            case 1:
                if(taxable_income <= 17850)                 //选项1
                {
                    tax = taxable_income * RATE_1;
                    break;
                }
                else
                {
                    tax = 17850 * RATE_1 + (taxable_income - 17850) * RATE_2;
                    break;
                } 
            case 2:                                         //选项2
                if(taxable_income <= 23900)
                {
                    tax = taxable_income * RATE_1;
                    break;
                }    
                else
                {
                    tax = 23900 * RATE_1 + (taxable_income - 23900) * RATE_2;
                    break;
                }
                    
            case 3:                                         //选项3
                if(taxable_income <= 29750)
                {
                    tax = taxable_income * RATE_1;
                    break;
                }  
                else
                {
                    tax = 29750 * RATE_1 + (taxable_income - 29750) * RATE_2;
                    break;
                }  
            case 4:                                         //选项4
                if(taxable_income <= 14875)
                {
                    tax = taxable_income * RATE_1;
                    break;
                }
                else
                {
                    tax = 14875 * RATE_1 + (taxable_income - 14875) * RATE_2;
                    break;
                }
                
        }
        printf("Tax is: %.2f\n",tax);
        printf("Enter the number corresponding to the selection: \n");
        printf("1) Single               2) Head of Household\n");
        printf("3) Married, Joint       4) Married, Separate\n");
        printf("5) quit\n");
    }
    return 0;
    
}