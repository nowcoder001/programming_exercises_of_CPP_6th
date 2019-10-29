/*Write and test a Fibonacci() function that uses a loop instead of recursion to calculate
Fibonacci numbers.*/

#include<stdio.h>
int Fibonacci(int n);

int main(void)
{
    int i;
    printf("Enter an integer number(q to quit): \n");
    while(scanf("%d",&i) == 1)
    {
        if(i <= 0)
        {
            printf("Enter a positive integer: \n");
            continue;
        }
        printf("The Fibonacci number is: %d\n",Fibonacci(i));
        printf("Enter an integer number(q to quit): \n");
    }
    return 0;
}

int Fibonacci(int n)
{
    int count;
    int sum_prev_prev = 1;
    int sum_prev = 1;
    int sum;
    if(n > 2)
    {
        for(count = 2; count < n; count++)
        {
            sum = sum_prev_prev + sum_prev;
            sum_prev_prev = sum_prev;
            sum_prev = sum;
        }
        return sum;
    }
    else
        return 1;
}