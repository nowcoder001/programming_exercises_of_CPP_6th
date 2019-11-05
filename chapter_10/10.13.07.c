/*Write a program that initializes a two-dimensional array-of-double and uses one of the
copy functions from exercise 2 to copy it to a second two-dimensional array. (Because a
two-dimensional array is an array of arrays, a one-dimensional copy function can be used
with each subarray.)*/

#include<stdio.h>
#define ELEMENT 2
#define SUBARRAY 3
void copy_ptr(double *target, double *source, int size);

int main(void)
{
    int i, j;
    int count;
    double ar[ELEMENT][SUBARRAY];
    double array[ELEMENT][SUBARRAY] = {{1, 2, 3}, {4, 5, 6}};

    for(count = 0; count < ELEMENT; count++)
        copy_ptr(ar[count], array[count],SUBARRAY);
    for(i = 0; i < ELEMENT; i++)
        for(j = 0; j < SUBARRAY; j++)
            printf("%f ",ar[i][j]);

    return 0;
}
void copy_ptr(double *target, double *source, int size)
{
    int i;
    for(i = 0; i < size; i++)
        *(target + i) = *(source + i);
}
