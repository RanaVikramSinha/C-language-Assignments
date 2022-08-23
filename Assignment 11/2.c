// 2. Write a function to calculate HCF of two numbers. (TSRS)

#include <stdio.h>

int hcf(int,int);

int main()
{
    int num1,num2,n;

    printf("Enter two numbers\n");
    scanf("%d %d",&num1,&num2);
    
    n=hcf(num1,num2);

    printf("HCF of %d and %d is %d\n",num1,num2,n);

    return 0;
}

int hcf(int num1,int num2)
{
    int i,n;

    for(i=1;i<=num1*num2;i++)
    {
        if(i%num1==0 && i%num2==0)
        {
            break;
        }
    }

    n=num1*num2/i;

    return n;
}