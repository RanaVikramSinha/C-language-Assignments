// 2. Write a program to calculate sum of first N even natural numbers

#include <stdio.h>

int main()
{
    int i,n,sum;

    printf("Enter a number\n");
    scanf("%d",&n);

    for(i=1,sum=0;i<=n;i++)
    {
        sum=sum+i*2;
    }

    printf("Sum of %d even natural numbers is %d\n",n,sum);

    return 0;
}