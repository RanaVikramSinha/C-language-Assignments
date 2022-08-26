// 5. Write a recursive function to calculate sum of digits of a given number

#include <stdio.h>

int digit(int);

int main()
{
    int n,sum;

    printf("Enter a number\n");
    scanf("%d",&n);

    sum=digit(n);

    printf("Sum of digits of %d is %d\n",n,sum);

    return 0;
}

int digit(int n)
{
    if(n==0)
    return 0;

    return n%10+digit(n/10);
}