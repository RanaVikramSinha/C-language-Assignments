// 7. Write a recursive function to print squares of first N natural numbers

#include <stdio.h>

void squarN(int);

int main()
{
    int n;

    printf("Enter a number\n");
    scanf("%d",&n);

    squarN(n);

    return 0;
}

void squarN(int n)
{
    if(n>0)
    {
        squarN(n-1);
        printf("%d ",n*n);
    }
}