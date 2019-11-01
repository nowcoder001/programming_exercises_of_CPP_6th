/*Write a function that returns the difference between the largest and smallest elements of
an array-of-double. Test the function in a simple program.*/

#include<stdio.h>
#define SIZE 5
double diff(double *array, int size);

int main(void)
{
    double array[SIZE] = {1.1, 2.2, 3.3, 4.4, 5.5};
    printf("The difference of the largest and smallest elements is %f",diff(array, SIZE));
    return 0;
}

double diff(double *array, int size)
{
    int i;
    double big;
    double small;
    double diff;
    for(i = 0, big = array[0]; i < size; i++)
        if(*(array + i) > big)
            big = *(array + i);
    for(i = 0, small = array[0]; i < size; i++)
        if(*(array + i) < small)
            small = *(array + i);
    diff = big - small;
    return diff;
}