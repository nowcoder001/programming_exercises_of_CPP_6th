/*Write a program that declares a 3×5 array of int and initializes it to some values of
your choice. Have the program print the values, double all the values, and then display
the new values. Write a function to do the displaying and a second function to do the
doubling. Have the functions take the array name and the number of rows as arguments.*/

#include<stdio.h>
#define ROW 3
#define COL 5
void double_num(double (*array)[5], int row);
void print(double array[][5], int row);

int main(void)
{
    double array[ROW][COL] = {
        {1.1, 2.2, 3.3, 4.4, 5.5},
        {6.6, 7.7, 8.8, 9.9, 0.0},
        {1.9, 2.8, 3.7, 4.6, 5.5}
        };
    print(array, ROW);
    double_num(array, ROW);
    putchar('\n');
    print(array, ROW);
    return 0;
}
void double_num(double (*array)[5], int row)
{
    int i, j;
    for(i = 0; i < row; i++)
        for(j = 0; j < 5; j++ )
            array[i][j] += array[i][j];
}
void print(double array[][5], int row)
{
    int i, j;
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < 5; j++)
        {
            printf("%.1f ", array[i][j]);

        }
        putchar('\n');
    }
}