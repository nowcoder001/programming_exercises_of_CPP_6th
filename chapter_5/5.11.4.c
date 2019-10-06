/*Write a program that asks the user to enter a height in centimeters and then displays the
height in centimeters and in feet and inches. Fractional centimeters and inches should
be allowed, and the program should allow the user to continue entering heights until a
nonpositive value is entered. A sample run should look like this:
    Enter a height in centimeters: 182
    182.0 cm = 5 feet, 11.7 inches
    Enter a height in centimeters (<=0 to quit): 168.7
    168.0 cm = 5 feet, 6.4 inches
    Enter a height in centimeters (<=0 to quit): 0
    bye*/

#include<stdio.h>
#define CENTI_TO_FEET 30
#define CENTI_TO_INCH 2.54

int main(void)
{
    float centi = 1;   //将变量初始化为外层循环判断真值
    printf("Enter a height in centimeters: ");    //只运行一次
    while(centi>0)
    {
        scanf("%f",&centi);    //只运行一次
        while(centi>0) 
        {
            printf("%.1f cm = %.0f feet, %.1f inches\n",centi,centi/CENTI_TO_FEET,centi/CENTI_TO_INCH);
            printf("Enter a height in centimeters (<=0 to quit): ");
            scanf("%f",&centi);    //输入大于0则继续内部循环，否则会同时结束内部循环和外部循环
        }
    }
    printf("bye");
    
    return 0;
}