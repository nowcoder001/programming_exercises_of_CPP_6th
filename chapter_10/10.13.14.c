//Do Programming Exercise 13, but use variable-length array function parameters.

#include<stdio.h>
#define ROW 3
#define COL 5
void store(int row, int col, double array[][col]);              //Store the information in a 3×5 array
double aver_row(double array[]);                                //Compute the average of each set of five values
double aver_all(int row, int col, double array[][col]);         //Compute the average of all the values
double largest_num(int row, int col, double array[][col]);      //Determine the largest value of the 15 values
void print(int row, int col, double array[][col]);              //Report the results

int main(void)
{
    int row = 3;
    int col = 5;
    double array[ROW][COL];
    store(row, col, array);
    largest_num(row, col, array);
    print(row, col, array);
    
    return 0;
}

void store(int row, int col, double array[][col])
{
    int i, j;
    printf("Enter 3 groups of number, each group has 5 numbers: \n");
    for(i = 0; i < ROW; i++)
        for(j = 0; j < COL; j++)
            scanf("%lf",&array[i][j]);
}

double aver_row(double array[])
{
    int i;
    double sum = 0;
    for(i = 0; i < COL; i++)
        sum += array[i];
    return sum / COL;
}

double aver_all(int row, int col, double array[][col])
{
    int i, j;
    double sum = 0;
    for(i = 0; i < ROW; i++)
        for(j = 0; j < COL; j++)
            sum += array[i][j];
    return sum / (ROW * COL);
}

double largest_num(int row, int col, double array[][col])
{
    int i, j;
    double l_num = 0;
    for(i = 0; i < ROW; i++)
        for(j = 0; j < COL; j++)
        {
            if(l_num < array[i][j])
                l_num = array[i][j];
        }
    return l_num;
}

void print(int row, int col, double array[][col])
{
    int i, j;
    printf("The elements of array are: \n");
    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
            printf("%6.2f",array[i][j]);
        putchar('\n');
    }

    for(i = 0; i < ROW; i++)
        printf("The average number of row %d is %.2f\n", i + 1, aver_row(array[i]));
    
    printf("The average number of array is: %.2f\n",aver_all(row, col, array));

    printf("The largest value of 15 values is: %.2f",largest_num(row, col,array));
}