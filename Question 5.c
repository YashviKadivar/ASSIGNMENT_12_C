/* Write a recursive function to print first N even natural numbers */

void even(int);

int main()
{
    int n;

    printf("\n Enter a Number->");
    scanf("%d",&n);

    even(n);

    return 0;
}

void even(int n)
{
    if(n==0)
        return ;

        even(n-1);

    printf("%d\n",2*n);
}

