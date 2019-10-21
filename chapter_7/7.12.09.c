/*Write a program that accepts a positive integer as input and then displays all the prime
numbers smaller than or equal to that number.*/

#include<stdio.h>
#include<stdbool.h>
int main(void)
{   
    int i;
    int num;
    int div;
    bool isPrime;
    printf("Enter an integer number: ");
    scanf("%d",&i);
    printf("The prime numbers smaller than or equal to %d: \n",i);
    for(num = 2; num <= i; num++)               
    {
        isPrime = true;                         //初始化标志
        for(div = 2; (div * div) <= num; div++) //使用加法计数器来穷举求模的被除数，使用者输入值为某两个因子的公倍数，只穷举一对中的一个
        {
            if(num % div == 0)                  //计算是否为素数
            {
                isPrime = false;
                break;
            }
        }
        if(isPrime == true)
            printf("%d ",num);
    }
        

    return 0;
}
