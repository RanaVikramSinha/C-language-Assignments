// 6. Write a function to print all Prime numbers between two given numbers. (TSRN)

#include <stdio.h>

void prime(int,int);

int main()
{
    int num1,num2;

    printf("Enter two numbers\n");
    scanf("%d %d",&num1,&num2);

    prime(num1,num2);

    return 0;
}

void prime(int num1,int num2)
{
    int i,n,flag;

    for(n=num1+1;n<=num2-1;n++)
    {
        flag=0;
        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                flag=1;
                break;
            }
        }

        if(flag==0)
        printf("%d ",n);
        
    }
}