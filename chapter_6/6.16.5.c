/*Have a program request the user to enter an uppercase letter. Use nested loops to produce
a pyramid pattern like this:
        A
       ABA
      ABCBA
     ABCDCBA
    ABCDEDCBA
The pattern should extend to the character entered. For example, the preceding pattern
would result from an input value of E. Hint: Use an outer loop to handle the rows. Use
three inner loops in a row, one to handle the spaces, one for printing letters in ascending
order, and one for printing letters in descending order. If your system doesn’t use ASCII
or a similar system that represents letters in strict number order, see the suggestion in
programming exercise 3.*/

#include<stdio.h>
int main(void)
{
    int ROWS;
    int space;
    int row;
    int i;
    char ch_f;
    char ch_b;
    char input;

    printf("Enter a uppercase letter: ");
    scanf("%c",&input);
    ROWS = input - 64;
    for(row = 0; row < ROWS; row++)                    //行
    {
        for(space = 0; space < ROWS - row; space++)    //空格
            printf(" ");
        for(ch_f = 'A', i = 0; i <= row; i++)          //升序
            printf("%c",ch_f++);
        for(i = 0,ch_b = row + 64; i <= row -1; i++)   //降序
            printf("%c",ch_b--);
        printf("\n");
    }
    return 0;
}