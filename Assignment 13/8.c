// 8. Write a recursive function to print first N terms of Fibonacci series

#include <stdio.h>

int fibN(int);

int main()
{
    int i,n;

    printf("Enter a number\n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("%d ",fibN(i));
    }

    return 0;
}

int fibN(int n)
{
    if(n==0 || n==1)
    return n;

    return fibN(n-1)+fibN(n-2);
}