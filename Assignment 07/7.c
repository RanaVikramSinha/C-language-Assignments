// 7. Write a program to print all Prime numbers between two given numbers

#include <stdio.h>

int main()
{
    int i,n,num1,num2,flag;

    printf("Enter two numbers\n");
    scanf("%d %d",&num1,&num2);

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
    
    return 0;
}