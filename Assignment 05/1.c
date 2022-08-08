// 1. Write a program to print MySirG N times on the screen

#include <stdio.h>

int main()
{
    int i=1,n;

    printf("Enter a number\n");
    scanf("%d",&n);

    while(i<=n)
    {
        printf("MySirG\n");
        i++;
    }
    
    return 0;
}