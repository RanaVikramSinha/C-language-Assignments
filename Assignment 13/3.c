// 2. Write a recursive function to calculate sum of first N even natural numbers

#include <stdio.h>

int sumEven(int);

int main()
{
    int n,sum;

    printf("Enter a number\n");
    scanf("%d",&n);

    sum=sumEven(n);

    printf("Sum of first %d even natural number is %d\n",n,sum);

    return 0;
}

int sumEven(int n)
{
    if(n==0)
    return 0;

    return 2*n+sumEven(n-1);
}