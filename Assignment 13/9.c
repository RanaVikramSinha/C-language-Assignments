// 9. Write a program in C to count the digits of a given number using recursion.

#include <stdio.h>

int digit(int);

int main()
{
    int n,count;

    printf("Enter a number\n");
    scanf("%d",&n);

    count=digit(n);

    printf("%d contains %d digits\n",n,count);

    return 0;
}

int digit(int n)
{
    if(n/10==0)
    return 1;

    return 1+digit(n/10);
}