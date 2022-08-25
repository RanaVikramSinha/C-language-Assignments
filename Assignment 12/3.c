// 3. Write a recursive function to print first N odd natural numbers

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
        oddN(n-1);
        printf("%d ",2*n-1);
    }
}