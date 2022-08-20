// 6. Write a function to calculate the factorial of a number. (TSRS)

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
    int i,f;

    for(i=1,f=1;i<=n;i++)
    {
        f=f*i;
    }

    return f;
}