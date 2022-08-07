// 3. Write a program to check whether a given number is an even number or an odd number.

#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number\n");
    scanf("%d",&n);

    if (n%2==0)
    printf("Even");

    else
    printf("Odd");
    
    return 0;
}