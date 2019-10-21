/*Write a program that creates an eight-element array of ints and sets the elements to the 
first eight powers of 2 and then prints the values. Use a for loop to set the values, and, 
for variety, use a do while loop to display the values.*/

#include<stdio.h>
int main(void)
{
    const int roots = 2;
    int array[7];
    int value;
    int j = 1;
    int i;
    for(i = 0, value = 1; i < 8; i++)   //赋值
    {
        array[i] = value * 2;           
        value = array[i];               //迭代计算各元素值
    }
    i = 0;
    do                                  //打印结果
    {
        printf("%5d",array[i]);
    } while (i++ < 7);
    printf("\n");
    return 0;
}