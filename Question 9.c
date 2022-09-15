/* Write a recursive function to print octal of a given decimal number  */

#include<stdio.h>

int octal(int n);

int main()
{
    int x=12;

    octal(x);

    return 0;
}

int octal(int n)
{
    if(n==0)
        return;

    octal(n/8);

    printf("%d",n%8);


}

