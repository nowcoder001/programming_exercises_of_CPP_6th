/*Write a function that returns the index of the largest value stored in an array-of- double . 
Test the function in a simple program.*/

#include<stdio.h>
#define SIZE 5
int max(double *array, int size);

int main(void)
{
    double array[SIZE] = {1.1, 2.2, 3.3, 4.4, 5.5};
    printf("The index of the largest value is: %d",max(array, SIZE));
    return 0;
}
int max(double *array, int size)
{
    int i;
    int i_max;
    double big_number;
    for(i = 0, i_max = 0; i < size; i++)
        if(*(array + i) > *(array + i_max))
            big_number = i;
    return big_number;
}