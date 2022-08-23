/* 10. Write a program in C to find the sum of the series 
1!/1+2!/2+3!/3+4!/4+5!/5 using the function.*/

#include <stdio.h>

int factorial(int);

int main()
{
    int i,sum=0;

    for(i=1;i<=5;i++)
    {
        sum=sum+(factorial(i)/i);
    }

    printf("%d ",sum);

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