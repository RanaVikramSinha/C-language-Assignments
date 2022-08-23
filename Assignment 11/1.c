// 1. Write a function to calculate LCM of two numbers. (TSRS)

#include <stdio.h>

int lcm(int,int);

int main()
{
    int num1,num2,n;

    printf("Enter two numbers\n");
    scanf("%d %d",&num1,&num2);
    
    n=lcm(num1,num2);

    printf("LCM of %d and %d is %d\n",num1,num2,n);

    return 0;
}

int lcm(int num1,int num2)
{
    int i;

    for(i=1;i<=num1*num2;i++)
    {
        if(i%num1==0 && i%num2==0)
        {
            break;
        }
    }

    return i;
}