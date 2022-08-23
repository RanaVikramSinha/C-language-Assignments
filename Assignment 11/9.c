// 9. Write a program in C to find the square of any number using the function.

#include <stdio.h>

int square(int);

int main()
{
    int n,s;

    printf("Enter a number\n");
    scanf("%d",&n);

    s=square(n);

    printf("The square of %d is %d\n",n,s);

    return 0;
}

int square (int n)
{
    return n*n;
}