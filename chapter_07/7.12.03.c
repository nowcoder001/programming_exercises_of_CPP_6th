/*Write a program that reads integers until 0 is entered. After input terminates, the
program should report the total number of even integers (excluding the 0) entered, the
average value of the even integers, the total number of odd integers entered, and the
average value of the odd integers.*/

#include<stdio.h>
int main(void)
{
    int num;
    int even_count = 0;
    int odd_count = 0;
    int sum_even = 0;
    int sum_odd = 0;
    printf("Enter integers, each number separate by space(terminate with 0): \n");
    while(scanf("%d",&num))
    {   
        if(num == 0)            //0计数，并退出
        {
            even_count++;
            break;
        }
        else if(num%2 == 0)     //偶数计数
        {
            even_count++;
            sum_even += num;
        } 
        else                    //奇数计数
        {
            odd_count++;
            sum_odd += num;            
        }
    }
    printf("The total number of even integers entered is %d, "
            "the average value of even integers is %.2f\n",even_count,(double)sum_even/even_count);
    printf("The total number of odd integers entered is %d, "
            "the average value of odd integers is %.2f\n",odd_count,(double)sum_odd/odd_count);

    return 0;
}