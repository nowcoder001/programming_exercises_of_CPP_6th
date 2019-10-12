/*Consider these two infinite series: 
 1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ...
 1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ...

 Write a program that evaluates running totals of these two series up to some limit of 
number of terms. Hint: –1 times itself an odd number of times is –1, and –1 times itself 
an even number of times is 1. Have the user enter the limit interactively; let a zero or 
negative value terminate input. Look at the running totals after 100 terms, 1000 terms, 
10,000 terms. Does either series appear to be converging to some value?*/

 #include<stdio.h>
 int main()
 {
    int num1;
    int num2;
    double value1 = 0;
    double value2 = 0;
    int i,j,k;
    printf("Enter two number of terms: ");
    scanf("%d %d",&num1,&num2);
    for(i = 1; i <= num1; i++)
    {
        value1 = value1 + 1.0/i;
    }
    for(j = 1,k = -1; j <= num2; j++)
    {
        k *= -1;
        value2 = value2 + k/i; 
    }
    printf("value1 = %f %d\n",value1,i);
    return 0;
 }