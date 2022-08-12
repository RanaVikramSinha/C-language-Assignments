// 4. Write n program to calculate HCF of two numbers

#include <stdio.h>

int main()
{
    int i,num1,num2,n;

    printf("Enter two numbers\n");
    scanf("%d %d",&num1,&num2);

    for(i=1;i<=num1;i++)
    {
        if(num1%i==0 && num2%i==0)
            n=i;
    }

    printf("%d is HCF of %d and %d\n",n,num1,num2);

    return 0;
}