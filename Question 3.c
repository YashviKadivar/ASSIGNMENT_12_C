/* Write a recursive function to print first N odd natural numbers  */

#include<stdio.h>

void odd(int);

int main()
{
    int n;

    printf("\n Enter a Number->");
    scanf("%d",&n);

    odd(n);

    return 0;
}

void odd(int n)
{
    if(n==0)
        return ;

        odd(n-1);

    printf("%d\n",2*n-1);
}
