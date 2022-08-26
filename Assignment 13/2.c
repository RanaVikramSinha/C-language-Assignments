// 2. Write a recursive function to calculate sum of first N odd natural numbers

#include <stdio.h>

int sumOdd(int);

int main()
{
    int n,sum;

    printf("Enter a number\n");
    scanf("%d",&n);

    sum=sumOdd(n);

    printf("Sum of first %d odd natural number is %d\n",n,sum);

    return 0;
}

int sumOdd(int n)
{
    if(n==1)
    return 1;

    return (2*n-1)+sumOdd(n-1);
}