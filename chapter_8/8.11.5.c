/*Modify the guessing program of Listing 8.4 so that it uses a more intelligent guessing 
strategy. For example, have the program initially guess 50, and have it ask the user 
whether the guess is high, low, or correct. If, say, the guess is low, have the next guess 
be halfway between 50 and 100, that is, 75. If that guess is high, let the next guess be 
halfway between 75 and 50, and so on. Using this binary search strategy, the program 
quickly zeros in on the correct answer, at least if the user does not cheat.*/

#include<stdio.h>
int main(void)
{
    char ch;
    int guess = 50;
    int left_value = 0;
    int right_value = 100;
    int m_value;
    printf("Pick an integer from 1 to 100. I will try to gess it.\n"
            "Respond with a y if my guess is right and with an n if it is wrong.\n");
    printf("Is your number %d?\n",guess);
    while(getchar() != 'y')         //输入为否时执行循环
    {

        printf("Is your number higher or lower than mine?");
        if(getchar() == '\n')
            ch = getchar();
        if(ch == 'h')               //数字比猜测大时
        {
            left_value = guess - 1;
            m_value = (right_value - left_value)/2;
            guess += m_value;
        }
        else if(ch == 'l')          //数字比猜测小时
        {
            right_value = guess + 1;
            m_value = (right_value - left_value)/2;
            guess -= m_value;
        }
        printf("Well, then, is it %d?\n",guess);
        while(getchar() != '\n')    //吸收缓冲区中输入后面的'\n'
            continue;
    }
    printf("I knew I could do it!\n");
    return 0;
}