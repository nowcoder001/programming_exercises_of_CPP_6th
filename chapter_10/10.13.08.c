/*Use a copy function from Programming Exercise 2 to copy the third through fifth 
elements of a seven-element array into a three-element array. The function itself need
not be altered; just choose the right actual arguments. (The actual arguments need not be 
an array name and array size. They only have to be the address of an array element and a 
number of elements to be processed.)*/

#include<stdio.h>
#define SIZE1 7
#define SIZE2 3
void copy_ptr(double *target2, double *source, int size);
void print(double *array, int size);
int main(void)
{
    double array1[SIZE1] = {1, 2, 3, 4, 5, 6, 7};
    double array2[SIZE2];
    copy_ptr(array2, &array1[4], SIZE2);
    print(array2, SIZE2);
    return 0;
}

void copy_ptr(double *target2, double *source, int size)
{
    int i;
    for(i = 0; i < size; i++)
        *(target2 + i) = *(source + i);
}

void print(double *array, int size)
{
    int i;
    for(i = 0; i < size; i++)
        printf("%.2f ",*(array + i));
}