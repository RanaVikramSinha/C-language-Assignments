// 6. Write a recursive function to calculate factorial of a given number

#include <stdio.h>

int factorial(int);

int main()
{
    int n,f;

    printf("Enter a number\n");
    scanf("%d",&n);

    f=factorial(n);

    printf("Factorial of %d is %d\n",n,f);

    return 0;
}

int factorial(int n)
{
    if(n==0 || n==1)
    return 1;

    return n*factorial(n-1);
}