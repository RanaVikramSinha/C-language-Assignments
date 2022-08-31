// 1. Write a function to find the greatest number from the given array of any size. (TSRS)

#include <stdio.h>

int greatest(int[],int);

int main()
{
    int n,g;

    printf("Enter the size of an array\n");
    scanf("%d",&n);

    int a[n];

    g=greatest(a,n);

    printf("%d is the greatest number\n",g);

    return 0;
}

int greatest(int a[], int n)
{
    int i;

    printf("Enter %d numbers\n",n);

    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {
        if(a[0]<a[i])
        a[0]=a[i];
    }

    return a[0];
}