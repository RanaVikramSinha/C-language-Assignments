// 8. Write a program to find next Prime number of a given number

#include <stdio.h>

int main()
{
    int i,n,num1,flag;

    printf("Enter a number\n");
    scanf("%d",&num1);

    for(n=num1+1; ;n++)
    {
        flag=0;

        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
            flag=1;
        }
        
        if(flag==0)
        {
            printf("%d ",n);
            break;
        }
    }
    
    return 0;
}