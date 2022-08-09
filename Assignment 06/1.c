// 1. Write a program to calculate sum of first N natural numbers

#include <stdio.h>

int main()
{
    int i,n,sum;

    printf("Enter a number\n");
    scanf("%d",&n);

    for(i=1,sum=0;i<=n;i++)
    {
        sum=sum+i;
    }

    printf("Sum of %d natural number is %d\n",n,sum);

    return 0;
}