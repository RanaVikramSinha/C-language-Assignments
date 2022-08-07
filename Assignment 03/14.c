// 14. Write a program to check whether a given number is divisible by 7 or divisible by 3.

#include <stdio.h>

int main()
{
    int a;

    printf("Enter a number\n");
    scanf("%d",&a);

    if(a%7==0 || a%3==0)
    printf("divisible by 7 or divisible by 3\n",a);

    else
    printf("Not divisible by 7 or divisible by 3\n",a);
    return 0;
}