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
    printf("1) $8.75/hr                     2) $9.33/hr\n");
    printf("3) $10.00/hr                    4) $11.20/hr\n");
    printf("5) quit\n");
    printf("*****************************************************************\n");
    while(scanf("%d",&selection) == 1 && selection != 5)    //成功读入相应数据且不是5时循环
    {
        switch(selection)
        {
            case 1:                                         //选项1
            {
                printf("Enter the hours your worked: ");
                scanf("%lf",&hours);
                gross_pay = hours * RATE_1;
                printf("Gross pay: %.2f\n",gross_pay);
                continue;
            } 
            case 2:                                         //选项2
            {
                printf("Enter the hours your worked: ");
                scanf("%lf",&hours);
                gross_pay = hours * RATE_2;
                printf("Gross pay: %.2f\n",gross_pay);
                continue;
            }
            case 3:                                         //选项3
            {
                printf("Enter the hours your worked: ");
                scanf("%lf",&hours);
                gross_pay = hours * RATE_3;
                printf("Gross pay: %.2f\n",gross_pay);
                continue;
            }    
            case 4:                                         //选项4
            {
                printf("Enter the hours your worked: ");
                scanf("%lf",&hours);
                gross_pay = hours * RATE_4;
                printf("Gross pay: %.2f\n",gross_pay);
                continue;
            }
            default:                                        //键入非选项
            {
                printf("You can only choice number 1 to 5\n");
                continue;
            }     
        }
    }
    return 0;
}