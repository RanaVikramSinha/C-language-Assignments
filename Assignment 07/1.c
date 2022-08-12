// 1. Write a program to find the Nth term of the Fibonnaci series.

#include <stdio.h>

int main()
{
    int n,i,a=-1,b=1,c;

    printf("Enter a number\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }

    printf("%dth term of the Fibonnaci series is %d\n",n,c);

    return 0;
}