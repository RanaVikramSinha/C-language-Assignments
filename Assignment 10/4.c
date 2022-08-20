// 4. Write a function to print first N natural numbers (TSRN)

#include <stdio.h>

void naturalNumbers(int);

int main()
{
    int n;

    printf("Enter a number\n");
    scanf("%d",&n);

    naturalNumbers(n);

    return 0;
}

void naturalNumbers(int n)
{
    int i=1;

    while(i<=n)
    {
        printf("%d ",i++);
    }
}