/* 3. Write a program to check whether a given number is there in the Fibonacci
series or not. */

#include <stdio.h>

int main()
{
    int i,n,a=1,b=1,c,flag=0;

    printf("Enter a number\n");
    scanf("%d",&n);

    if(n==0 || n==1)
    {
      flag=1;  
    }

    for(i=2;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;

        if(c==n)
        {
            flag=1;
            break;
        }
    }

    if(flag==1)
    printf("%d is a Fibonacci Series number\n",n);

    else
    printf("%d is not a Fibonacci Series number\n",n);
    
    return 0;
}