// 5. Write a function to print first N prime numbers (TSRN)

#include <stdio.h>

void primeNumbers(int);

int main()
{
    int num;

    printf("Enter a number\n");
    scanf("%d",&num);

    primeNumbers(num);

    return 0;
}

void primeNumbers(int num)
{
    int i,n=2;

    while(num)
    {
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            {
                break;
            }
            
        }

        if(i==n)
        {
            printf("%d ",n);
            num--;
        }
        n++;
    }
}