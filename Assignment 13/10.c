// 10. Write a program in C to calculate the power of any number using recursion.

#include <stdio.h>

int power(int,int);

int main()
{
    int a,b,r;

    printf("Enter a number\n");
    scanf("%d",&a);

    printf("Enter a power number\n");
    scanf("%d",&b);

    r=power(a,b);

    printf("%d^%d = %d\n",a,b,r);

    return 0;
}

int power(int a,int b)
{
    if(b==0)
    return 1;

    return a*power(a,b-1);
}