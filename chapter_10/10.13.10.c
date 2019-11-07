/*Write a function that sets each element in an array to the sum of the corresponding 
elements in two other arrays. That is, if array 1 has the values 2, 4, 5, and 8 and array 2 
has the values 1, 0, 4, and 6, the function assigns array 3 the values 3, 4, 9, and 14. The 
function should take three array names and an array size as arguments. Test the function 
in a simple program.*/

#include<stdio.h>
#define SIZE 4
void add_array(int *array1, int *array2, int *array3,int size);
void print(int *array, int size);
int main(void)
{
    int array1[SIZE] = {2, 4, 5, 8};
    int array2[SIZE] = {1, 0, 4, 6};
    int array3[SIZE];
    add_array(array1, array2, array3, SIZE);
    print(array3, SIZE);
    return 0;
}

void add_array(int *array1, int *array2, int *array3, int size)
{
    int i, j;
    for(i = 0; i < size; i++)
        *(array3 + i) = *(array1 + i) + *(array2 + i);
}

void print(int *array, int size)
{
    int i;
    for(i = 0; i < size; i++)
        printf("%d ",*(array + i));
}