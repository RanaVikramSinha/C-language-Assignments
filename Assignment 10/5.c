// 5. Write a function to print first N odd natural numbers. (TSRN)

#include <stdio.h>

void oddNaturalNumbers(int);

int main()
{
    int n;

    printf("Enter anumber\n");
    scanf("%d",&n);

    oddNaturalNumbers(n);

    return 0;
}

void oddNaturalNumbers(int n)
{
    int i=1;

    while(i<=n)
    {
        printf("%d ",2*i-1);
        i++;
    }
}