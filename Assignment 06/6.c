// 6. Write a program to calculate factorial of a number

#include <stdio.h>

int main()
{
    int i,n,f;

    printf("Enter a number\n");
    scanf("%d",&n);

    for(i=1,f=1;i<=n;i++)
    {
        f=f*i;
    }

    printf("Factorial of %d is %d\n",n,f);
    
    return 0;
}