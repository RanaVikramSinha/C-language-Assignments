// 7. Write a recursive function to calculate HCF of two numbers

#include <stdio.h>

int hcf(int,int);

int main()
{
    int num1,num2,r;

    printf("Enter two numbers\n");
    scanf("%d %d",&num1,&num2);

    if(num1>num2)
    {
        r=hcf(num1,num2);
        printf("HCF = %d\n",r);
    }

    else
    {
        r=hcf(num2,num1);
        printf("HCF = %d",r);
    }

    return 0;
}

int hcf(int a,int b)
{
    if(b==0)
    return a;

    hcf(b,a%b);
}