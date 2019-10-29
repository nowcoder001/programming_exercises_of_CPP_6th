/*Generalize the to_binary() function of Listing 9.8 to a to_base_n() function that
takes a second argument in the range 2–10. It then should print the number that is its
first argument to the number base given by the second argument. For example, to_
base_n(129,8) would display 201, the base-8 equivalent of 129. Test the function in a
complete program.*/
#include<stdio.h>
void to_base_on(unsigned long n, int base);

int main(void)
{
    unsigned long number;
    int base;
    printf("Enter integer and base(q to quit): \n");
    while(scanf("%u %d",&number,&base) == 2)
    {
        if(base < 2 || base > 10)
        {
            printf("Base is in the range of 2-10, enter another number.\n");
            continue;
        }
        to_base_on(number, base);
        printf(",the base-%d equivalent of %u: ",base, number);
        putchar('\n');
        printf("Enter an integer(q to quit): \n");
    }
    printf("Done.\n");
    return 0;
}
void to_base_on(unsigned long n, int base)
{
    int r;
    r = n % base;
    if(n >= base)
        to_base_on(n / base, base);
    putchar('0' + r);
}