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
        isPrime = true;
        for(div = 2; (div *div) <= num; div++)
        {
            if(num % div == 0)
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
