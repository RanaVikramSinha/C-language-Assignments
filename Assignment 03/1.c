// 1. Write a program to check whether a given number is positive or non-positive.

#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number\n");
    scanf("%d",&n);

    if(n>0)
    printf("Positive");

    else
    printf("Non-Postive");

    return 0;
}