// 5. Write a recursive function to print first N even natural numbers

#include <stdio.h>

void evenN(int);

int main()
{
    int n;

    printf("Enter a number\n");
    scanf("%d",&n);

    evenN(n);

    return 0;
}

void evenN(int n)
{
    if(n>0)
    {
        evenN(n-1);
        printf("%d ",2*n);
    }
}