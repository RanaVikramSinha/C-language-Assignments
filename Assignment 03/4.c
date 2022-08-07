// 4. Write a program to check whether a given number is an even number or an odd number without using % operator.

#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number\n");
    scanf("%d",&n);

    n = n&1;

    if(n==1)
    printf("Odd");

    else
    printf("Even");
    
    return 0;
}