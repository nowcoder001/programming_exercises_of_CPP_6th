#include <stdio.h>

int main(void)
{
    int first_num;
    int last_num;
    printf("Please type a number.\n");
    scanf("%d",&first_num);
    last_num = first_num + 10;
    while(first_num++ < last_num)
    {
        printf("%d\n",first_num);
    }

    return 0;
}
