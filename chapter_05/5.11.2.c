/*Write a program that asks for an integer and then prints all the integers from (and
including) that value up to (and including) a value larger by 10. (That is, if the input is 5,
the output runs from 5 to 15.) Be sure to separate each output value by a space or tab or
newline.*/

#include <stdio.h>

int main(void)
{
    int num_init = 0;        //初始化计数器
    int num_enter;

    printf("Enter an integer number: ");
    scanf("%d",&num_enter);
    while (num_init < 11)    //计数
    {
        printf("%d\n",num_enter+num_init);
        num_init++;          //每次循环最后增加1
    }
    return 0;
}