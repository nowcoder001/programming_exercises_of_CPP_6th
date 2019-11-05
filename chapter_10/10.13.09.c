/*Write a program that initializes a two-dimensional 3×5 array-of- double and uses a 
VLA-based function to copy it to a second two-dimensional array. Also provide a VLA-based 
function to display the contents of the two arrays. The two functions should be capable, 
in general, of processing arbitrary N × M arrays. (If you don’t have access to a VLA-capable 
compiler, use the traditional C approach of functions that can process an N×5 array).*/

#include<stdio.h>
void copy(int n, int m, double target[n][m], double source[n][m]);
void print(int n, int m, double array[n][m]);
#define N 3
#define M 5

int main(void)
{
    double array1[N][M] = {
        {1.1, 2.2, 3.3, 4.4, 5.5}, 
        {1.2, 2.3, 3.4, 4.5, 5.6},
        {1.9, 2.8, 3.7, 4.6, 5.5}};
    double array2[N][M];
    copy(N, M, array2, array1);
    print(N, M, array2);
    return 0;
}

void copy(int n, int m, double target[n][m], double source[n][m])
{
    int i, j;
    for(i = 0; i < n; i++)
        for(j = 0; j < m; j++)
            target[i][j] = source[i][j];
}

void print(int n, int m, double array[n][m])
{
     int i, j;
    for(i = 0; i < n; i++)
        for(j = 0; j < m; j++)
            printf("%f ",array[i][j]);
}