/* 9. Write a program to check whether a given number is an Armstrong number
or not */ 

#include <stdio.h>

int main()
{
    int n,i,a,b,c;

    printf("Enter a number\n");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        a=i/100;
        b=(i/10)%10;
        c=i%10;
    }

    if(n==a*a*a+b*b*b+c*c*c)
    printf("%d is a Armstrong Number\n",n);
    
    else
    printf("%d is not a Armstrong Number\n",n);

    return 0;
}