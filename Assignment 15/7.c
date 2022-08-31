// 7. Write a function in C to count a total number of duplicate elements in an array.

#include <stdio.h>

int dup(int[],int);

int main()
{
    int n,i;

    printf("Enter the size of an array\n");
    scanf("%d",&n);

    int a[n],c;

    printf("Enter %d numbers\n",n);

    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    c=dup(a,n);

    printf("Number of duplicate elements is %d\n",c);

    return 0;
}

int dup(int a[],int n)
{
    int i,j,count=0;

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            count++;
        }
    }

    return count;
}