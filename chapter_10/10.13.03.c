/*Write a function that returns the largest value stored in an array-of- int. Test the function 
in a simple program.*/

#include<stdio.h>
#define SIZE 5
int max(int *ar, int size);
int main(void)
{
    int max_num;
    int array[SIZE] = {1, 2, 3, 4, 5};
    max_num = max(array,SIZE);
    printf("The largest value stored in the array is %d\n",max_num);
    return 0;
}
int max(int *ar, int size)
{
    int i = 0;
    int big_num = ar[i];
    for(; i < size; i++)
    {
        if(big_num < ar[i])
            big_num = ar[i];
    }
    return big_num;
}