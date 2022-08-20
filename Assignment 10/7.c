/* 7. Write a function to calculate
the number of combinations one can make from n items
and r selected at a time. (TSRS) */

#include <stdio.h>

int factorial(int);
int combination(int,int);

int main()
{
    int n,c,r;

    printf("Enter the value of n and r\n");
    scanf("%d %d",&n,&r);

    c=combination(n,r);

    printf("Number of Combinations are %d\n",c);

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

int combination(int n, int r)
{
    int c;

    c=factorial(n)/(factorial(r)*factorial(n-r));

    return c;
}