// Write a program to check whether a given number is a Prime number or not

#include <stdio.h>

int main()
{
    int i,n,flag=0;

    printf("Enter a number\n");
    scanf("%d",&n);

    if(n==0 || n==1)
    flag=1;

    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }

    if(flag==0)
    printf("Prime number\n");

    else
    printf("Not prime number\n");
    
    return 0;
}