// 2. Write a program to check whether a given number is divisible by 5 or not

#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number\n");
    scanf("%d",&n);

    if(n%5==0)
    printf("%d is divisible by 5\n",n);

    else
    printf("%d is not divisible by 5\n",n);
    return 0;
}