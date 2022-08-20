/* 9. Write a function to check whether a given number contains a given digit or not. (TSRS)*/

#include <stdio.h>

int check(int);

int main()
{
    int n,d;

    printf("Enter a number\n");
    scanf("%d",&n);

    d=check(n);

    if(d==1)
    printf("Given number contains a given digit\n");

    else
    printf("Given number not contains a given digit\n");

    return 0;
}

int check(int n)
{
    int rem,digit;

    printf("Enter a digit\n");
    scanf("%d",&digit);

    while(n!=0)
    {
        rem=n%10;

        if(rem==digit)
        return 1;

        n=n/10;
    }

    return 0;
}