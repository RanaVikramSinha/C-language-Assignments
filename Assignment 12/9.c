// 9. Write a recursive function to print octal of a given decimal number

#include <stdio.h>

void binary(int);

int main()
{
    int n;

    printf("Enter a number\n");
    scanf("%d",&n);

    binary(n);

    return 0;
}

void binary(int n)
{
    if(n==0)
    return;

    binary(n/8);
    printf("%d",n%8);
}