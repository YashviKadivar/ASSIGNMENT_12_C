/* Write a recursive function to print first N odd natural numbers in reverse order */

void odd_reverse(int);

int main()
{
    int n;

    printf("\n Enter a Number->");
    scanf("%d",&n);

    odd_reverse(n);

    return 0;
}

void odd_reverse(int n)
{
    if(n==0)
        return ;

     printf("%d\n",2*n-1);

        odd_reverse(n-1);
}

