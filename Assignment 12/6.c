// 6. Write a recursive function to print first N even natural numbers in reverse order

#include <stdio.h>

void reverseN(int);

int main()
{
    int n;

    printf("Enter a number\n");
    scanf("%d",&n);

    reverseN(n);

    return 0;
}

void reverseN(int n)
{
    if(n>0)
    {
        printf("%d ",2*n);
        reverseN(n-1);
    }
}