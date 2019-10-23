/*Write a program that reads input as a stream of characters until encountering EOF. Have 
it report the average number of letters per word. Don’t count whitespace as being letters 
in a word. Actually, punctuation shouldn’t be counted either, but don’t worry about that 
now. (If you do want to worry about it, consider using the ispunct() function from the 
ctype.h family.)*/

#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>

int main(void)
{
    char ch;
    char prev_ch;
    int count_c = 0;           //单词字符计数
    int count_w = 0;           //单词计数
    bool in_word = false;      //判断当前位置是否在单词中，真为在单词中，假为在词前或词尾 

    while((ch = getchar()) != EOF)
    {
        if(!isspace(ch) && !ispunct(ch) && in_word == false)    //当在单词开头读入字母时字符数+1
        {
            in_word = true;
            count_c++;
        }
        else if(!isspace(ch) && !ispunct(ch) && in_word == true)//当在单词中间读入字母时字符数+1
            count_c++;
        if(isspace(ch) || ispunct(ch) && in_word == true)       //当在词尾读入空格或标点时单词计数+1
        {
            count_w++;
            in_word = false;
        }
    }
    printf("%d %d",count_c,count_w);
    printf("The average number of letters per word is: %d",count_c/count_w);
    return 0;
}