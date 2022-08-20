/* 8. Write a function to calculate 
the number of arrangements one can make from 
n items and r selected at a time. (TSRS)*/

#include <stdio.h>

int factorial(int);
int arrangements(int,int);

int main()
{
    int n,a,r;

    printf("Enter the value of n and r\n");
    scanf("%d %d",&n,&r);

    a=arrangements(n,r);

    printf("Number of arrangementss are %d\n",a);

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

int arrangements(int n, int r)
{
    int a;

    a=factorial(n)/factorial(r);

    return a;
}