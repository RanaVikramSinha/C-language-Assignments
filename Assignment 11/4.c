// 4. Write a function to find the next prime number of a given number. (TSRS)

#include <stdio.h>

int nextPrime(int);

int main()
{
    int num,n;

    printf("Enter a number\n");
    scanf("%d",&num);

    n=nextPrime(num);
    printf("%d next prime number of %d\n",n,num);

    return 0;
}

int nextPrime(int num)
{
    int i,n,flag;

    for(n=num+1; ; n++)
    {
        flag=0;

        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
            flag=1;
            break;
        }

        if(flag==0)
        break;
    }

    return n;
}