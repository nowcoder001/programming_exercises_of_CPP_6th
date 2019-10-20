/*7. Write a program that requests the hours worked in a week and then prints the gross pay,
the taxes, and the net pay. Assume the following:
    a. Basic pay rate = $10.00/hr
    b. Overtime (in excess of 40 hours) = time and a half
    c. Tax rate: #15% of the first $300
    20% of the next $150
    25% of the rest
    Use #define constants, and don’t worry if the example does not conform to current
    tax law.*/

#include<stdio.h>
#define PAY_RATE 10
#define EXCESS_TIME 40
#define OVERTIME 1.5
#define TEX_300 0.15
#define TEX_300_to_450 0.2
#define TEX_UPPER 0.25

int main(void)
{
    double hours;
    double gross_pay;
    double taxes;
    double netpay;

    printf("Enter the hours worked in a week: ");
    scanf("%lf",&hours);

    if(hours <= EXCESS_TIME)
        gross_pay = PAY_RATE * hours;
    else
        gross_pay = EXCESS_TIME * PAY_RATE + (hours - EXCESS_TIME) * PAY_RATE * OVERTIME;

    if(gross_pay <= 300)
        taxes = gross_pay * TEX_300;
    else if(gross_pay <= 450 && gross_pay > 300)
        taxes = 300 * TEX_300 + (gross_pay - 300) * TEX_300_to_450;
    else
        taxes = 300 * TEX_300 + 150 * TEX_300_to_450 + (gross_pay - 450) * TEX_UPPER;
    
    netpay = gross_pay - taxes;
    printf("Gross pay: %.2f\nThe taxes: %.2f\nThe net pay: %.2f",gross_pay,taxes,netpay);

    return 0;
}