/*Write a program that requests lower and upper integer limits, calculates the sum of all 
the integer squares from the square of the lower limit to the square of the upper limit, 
and displays the answer. The program should then continue to prompt for limits and 
display answers until the user enters an upper limit that is equal to or less than the lower 
limit. A sample run should look something like this: 
 Enter lower and upper integer limits: 5 9
 The sums of the squares from 25 to 81 is 255
 Enter next set of limits: 3 25
 The sums of the squares from 9 to 625 is 5520
 Enter next set of limits: 5 5
 Done*/

 #include<stdio.h>
 int main(void)
 {
    int low;
    int low_s;
    int upper;
    int value;
    printf("Enter lower and upper integer limits: ");
    while(scanf("%d %d",&low,&upper) ==2 && low < upper)
    {
    low_s = low;
    for(value = 0; low <= upper; low++)
    {
        value += low * low;
    }
    printf("The sums of the squares from %d to %d is %d\n",low_s * low_s, upper * upper, value);
    printf("Enter next set of limites: ");
    }
    printf("Done\n");
    return 0;
 }