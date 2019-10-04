#include <stdio.h>

int main()
{
    int const min_per_hour = 60;
    int min_input;
    int hour;
    int minite;
    min_input = 1;

    while(min_input>0)
    {
        printf("Please type the minites your want to transform\nOR type a number less than 0 to quit\n");
        scanf("%d",&min_input);
        hour = min_input/min_per_hour;
        minite = min_input%min_per_hour;
        printf("The minite you type is %d hours and %d minites\n",hour,minite);

    }
    
    return 0;
}
