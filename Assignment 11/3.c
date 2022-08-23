// 3. Write a function to check whether a given number is Prime or not. (TSRS)

#include <stdio.h>

int prime(int);

int main()
{
    int num,n;

    printf("Enter anumber\n");
    scanf("%d",&num);

    n=prime(num);

    if(n==0)
    printf("%d is a prime number\n",num);

    else
    printf("%d is not a prime number\n",num);

    return 0;
}

int prime(int num)
{
    int i,flag=0;

    if(num==1)
    flag=1;

    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        flag=1;
    }

    return flag;
}