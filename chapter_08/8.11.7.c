/*Modify Programming Exercise 8 from Chapter 7 so that the menu choices are labeled by 
characters instead of by numbers; use q instead of 5 as the cue to terminate input.*/

#include<stdio.h>
#define RATE_1 8.75
#define RATE_2 9.33
#define RATE_3 10.00
#define RATE_4 11.20

int main(void)
{
    int selection;
    double hours;
    double gross_pay;
    printf("*****************************************************************\n");
    printf("Enter the number corresponding to the desired pay rate or action: \n");
    printf("a) $8.75/hr                     b) $9.33/hr\n");
    printf("c) $10.00/hr                    d) $11.20/hr\n");
    printf("q) quit\n");
    printf("*****************************************************************\n");
    while((selection = getchar()) != 'q')    //不是5时循环
    {
        switch(selection)
        {
            case 'a':                                         
            {
                printf("Enter the hours your worked: ");
                scanf("%lf",&hours);
                gross_pay = hours * RATE_1;
                printf("Gross pay: %.2f\n",gross_pay);
                break;
            } 
            case 'b':                                         
            {
                printf("Enter the hours your worked: ");
                scanf("%lf",&hours);
                gross_pay = hours * RATE_2;
                printf("Gross pay: %.2f\n",gross_pay);
                break;
            }
            case 'c':                                         
            {
                printf("Enter the hours your worked: ");
                scanf("%lf",&hours);
                gross_pay = hours * RATE_3;
                printf("Gross pay: %.2f\n",gross_pay);
                break;
            }    
            case 'd':                                        
            {
                printf("Enter the hours your worked: ");
                scanf("%lf",&hours);
                gross_pay = hours * RATE_4;
                printf("Gross pay: %.2f\n",gross_pay);
                break;
            }
            default:                                        //键入非选项
            {
                printf("You can only choice a, b, c, d, or q.\n");
                break;
            }

        }
        while(getchar() != '\n')                            //吸收键入结尾的'\n'
            continue;
    }
    return 0;
}