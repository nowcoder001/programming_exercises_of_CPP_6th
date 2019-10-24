/*Write a program that shows you a menu offering you the choice of addition, subtraction, 
multiplication, or division. After getting your choice, the program asks for two numbers, 
then performs the requested operation. The program should accept only the offered 
menu choices. It should use type float for the numbers and allow the user to try again 
if he or she fails to enter a number. In the case of division, the program should prompt 
the user to enter a new value if 0 is entered as the value for the second number. A typical 
program run should look like this:
 Enter the operation of your choice:
 a. add s. subtract
 m. multiply d. divide
 q. quit
a
 Enter first number: 22 .4
 Enter second number: one
 one is not an number.
 Please enter a number, such as 2.5, -1.78E8, or 3: 1
 22.4 + 1 = 23.4
 Enter the operation of your choice:
 a. add s. subtract
 m. multiply d. divide
 q. quit
d
 Enter first number: 18.4
 Enter second number: 0
 Enter a number other than 0: 0.2
 18.4 / 0.2 = 92
 Enter the operation of your choice:
 a. add s. subtract
 m. multiply d. divide
 q. quit
q
 Bye.*/

#include<stdio.h>
int main(void)
{  
    char ch;
    char selection;
    float result;
    float first_num;
    float second_num;
    printf("Enter the operation of your choice: \n");
    printf("a.add          s.subtract\n");
    printf("m.multiply     d.divide\n");
    printf("q.quit\n");
    while((selection = getchar()) != 'q')
    {
        if(selection != 'a' && selection != 's' && selection != 'm' && selection != 'd') //判断是否输入非选项
        {
            printf("You can only chose a, s, m or d.\n");
            while(getchar() != '\n')
                continue;
            continue;
        }


        printf("Enter first number: \n");   //输入第一个数
        while(scanf("%f",&first_num) != 1)
        {
            while((ch = getchar()) != '\n')
                putchar(ch);
            printf(" is not an number.\n");
            printf("Please enter a number, such as 2.5, -1.78E8, or 3:");
        }


        printf("Enter second number: \n");  //输入第二个数
        while(scanf("%f",&second_num) != 1 || second_num == 0)
        {   
            if(second_num == 0)
            {
                printf("Enter a number other than 0: \n");
                second_num = 1;
                while(getchar() != '\n')  //??
                    continue;
            }
            else
            {
                while((ch = getchar()) != '\n')
                    putchar(ch);
                printf(" is not an number.\n");
                printf("Please enter a number, such as 2.5, -1.78E8, or 3:\n");
            }    
        }


        switch(selection)
        {
            case 'a':           //加法
            {
                result = first_num + second_num;   
                printf("%.1f + %.1f = %.1f\n",first_num,second_num,result);
                break;
            }
            case 'b':           //减法
            {
                result = first_num - second_num;
                printf("%.1f - %.1f = %.1f\n",first_num,second_num,result);
                break;
            }
            case 'c':           //乘法
            {
                result = first_num * second_num;
                printf("%.1f * %.1f = %.1f\n",first_num,second_num,result);
                break;
            }
            case 'd':           //除法
            {
                result = first_num / second_num;
                printf("%.1f / %.1f = %.1f\n",first_num,second_num,result);
                break;
            } 
        }
        printf("Enter the operation of your choice: \n");
        printf("a.add          s.subtract\n");
        printf("m.multiply     d.divide\n");
        printf("q.quit\n");
        while(getchar() != '\n') //吸收'\n'
            continue;
    }
    if(selection == 'q')
        printf("Bye.\n");
    return 0;
}