/* Write a program to check whether two given numbers are co-prime
numbers or not */ 

#include <stdio.h>

int main()
{
    int i,num1,num2,flag;

    printf("Enter two numbers\n");
    scanf("%d %d",&num1,&num2);

    for(i=1;i<=num1;i++)
    {
        if(num1%i==0 && num2%i==0)
            flag=i;
    }

    if(flag==1)
    printf("%d and %d are co-prime numbers\n",num1,num2);

    else
    printf("%d and %d are not co-prime numbers\n",num1,num2);

    return 0;
}