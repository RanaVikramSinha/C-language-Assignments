/* 6. Write a function in C to read n number of values in an array and 
display it in reverse order.*/

#include <stdio.h>

void rev(int[],int);

int main()
{
    int n;

    printf("Enter n number\n");
    scanf("%d",&n);

    int a[n];

    rev(a,n);
    
    return 0;
}

void rev(int a[],int n)
{
    int i;

    printf("Enter %d numbers\n",n);

    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(i=n-1;i>=0;i--)
    printf("%d ",a[i]);
}