/* Write a recursive function to print binary of a given decimal number */

#include<stdio.h>

int binary(int n);

int main()
{
    int x=12;

    binary(x);

    return 0;
}

int binary(int n)
{
    if(n==0)
        return;

    binary(n>>1);

    printf("%d",n&1);


}
