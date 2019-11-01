/*Write a function that reverses the contents of an array of double and test it in a simple
program.*/

#include<stdio.h>
#define SIZE 5
void reverse(double *array, int size);
void print(double *array, int size);

int main(void)
{
    double array[SIZE] = {1.1, 2.2, 3.3, 4.4, 5.5};
    reverse(array, SIZE);
    print(array, SIZE);

    return 0;
}
void reverse(double *array, int size)
{
    int i;
    double ar[size];
    for(i = 0; i < size; i++)
        ar[(size - 1) - i] = *(array + i);
    for(i = 0; i < size; i++)
        *(array + i) = *(ar + i);
}
void print(double *array, int size)
{
    int i;
    for(i = 0; i < size; i++)
        printf("%.1f ",*(array + i));
}