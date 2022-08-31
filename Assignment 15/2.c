// 2. Write a function to find the smallest number from the given array of any size. (TSRS)

#include <stdio.h>

int smallest(int[],int);

int main()
{
    int n,s;

    printf("Enter the size of an array\n");
    scanf("%d",&n);

    int a[n];

    s=smallest(a,n);

    printf("%d is the smallest number\n",s);

    return 0;
}

int smallest(int a[], int n)
{
    int i;

    printf("Enter %d numbers\n",n);

    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {
        if(a[0]>a[i])
        a[0]=a[i];
    }

    return a[0];
}