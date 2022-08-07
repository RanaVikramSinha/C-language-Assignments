// 5. Write a program to check whether a given number is a three-digit number or not.

#include <stdio.h>

int main()
{
    int n;

    printf("Enter a Number\n");
    scanf("%d",&n);

    if(n/100>0 && n/100<=9)
    printf("Three digit number\n");

    else
    printf("Not a three digit number\n");
    
    return 0;
}