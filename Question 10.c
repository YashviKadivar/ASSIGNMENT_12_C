/* Write a recursive function to print reverse of a given number    */

#include<stdio.h>

int n=0;

int reverse_number(int);

int main()
{
    printf("%d",reverse_number(456));

    return 0;
}

int reverse_number(int x)
{
    if(x)
    {
        n=n*10+x%10;
        x=x/10;
        return reverse_number(x);
    }
    else
    {
        return n;
    }
}
