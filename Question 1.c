/* Write a recursive function to print first N natural numbers  */

#include<stdio.h>

void print_natural(int);

int main()
{
    int n;

    printf("\n Enter a Number->");
    scanf("%d",&n);

    print_natural(n);

    return 0;
}

void print_natural(int n)
{
    if(n==0)
        return 0;

    print_natural(n-1);

    printf(" %d ",n);
}
