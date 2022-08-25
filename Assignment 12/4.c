// 4. Write a recursive function to print first N odd natural numbers in reverse order

#include <stdio.h>

void oddN(int);

int main()
{
    int n;

    printf("Enter a number\n");
    scanf("%d",&n);

    oddN(n);

    return 0;
}

void oddN(int n)
{
    if(n>0)
    {
        printf("%d ",2*n-1);
        oddN(n-1);
    }
}