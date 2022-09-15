/* Write a recursive function to print first N even natural numbers in reverse order    */

void even_reverse(int);

int main()
{
    int n;

    printf("\n Enter a Number->");
    scanf("%d",&n);

    even_reverse(n);

    return 0;
}

void even_reverse(int n)
{
    if(n==0)
        return ;

    printf("%d\n",2*n);

        even_reverse(n-1);
}

