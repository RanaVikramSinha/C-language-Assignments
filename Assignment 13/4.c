// 4. Write a recursive function to calculate sum of squares of first n natural numbers

#include <stdio.h>

int squar(int);

int main()
{
    int n,sum;

    printf("Enter a number\n");
    scanf("%d",&n);

    sum=squar(n);

    printf("Sum of squares of first %d natural number is %d\n",n,sum);

    return 0;
}

int squar(int n)
{
    if(n==1)
    return 1;

    return n*n+squar(n-1);
}