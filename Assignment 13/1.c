// 1. Write a recursive function to calculate sum of first N natural numbers

#include <stdio.h>

int sumN(int);

int main()
{
    int n,sum;

    printf("Enter a number\n");
    scanf("%d",&n);

    sum=sumN(n);

    printf("Sum of first %d natural number is %d\n",n,sum);

    return 0;
}

int sumN(int n)
{
    if(n==1)
    return 1;

    return n+sumN(n-1);
}