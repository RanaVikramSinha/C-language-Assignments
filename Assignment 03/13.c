// 13. Write a program to check whether a given number is divisible by 3 and divisible by 2.

#include <stdio.h>

int main()
{
    int a;

    printf("Enter a number\n");
    scanf("%d",&a);

    if(a%3==0 && a%2==0)
    printf("divisible by 3 and divisible by 2\n",a);

    else
    printf("Not divisible by 3 and divisible by 2\n",a);
    return 0;
}