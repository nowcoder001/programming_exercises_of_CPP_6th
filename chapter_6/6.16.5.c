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

#include<stdio.h>      //难点在于总行数、每行左空格数、升序打印数、降序打印数随输入字母不同而不同，各内嵌循环的判断条件是重点
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
    ROWS = input - 64;                                 //行数根据输入的字母不同而不同，数越大行数越多
    for(row = 0; row < ROWS; row++)                    //行
    {
        for(space = 0; space < ROWS - row; space++)    //每行的左半部分空格数，根据输入字母不同而不同
            printf(" ");
        for(ch_f = 'A', i = 0; i <= row; i++)          //每行字母升序打印
            printf("%c",ch_f++);
        for(i = 0,ch_b = row + 64; i <= row -1; i++)   //每行字母降序打印
            printf("%c",ch_b--);
        printf("\n");
    }
    return 0;
}