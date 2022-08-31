// 8. Write a function in C to print all unique elements in an array.

#include <stdio.h>

void uni(int[],int);

int main()
{
    int n,i;

    printf("Enter the size of an array\n");
    scanf("%d",&n);

    int a[n];

    printf("Enter %d numbers\n",n);

    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    uni(a,n);

    return 0;
}

void uni(int a[],int n)
{
    int i,j,flag;

    for(i=0;i<n;i++)
    {
        flag=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j] && i!=j)
            {
                flag=1;
            }
        }
        if(flag==0)
        printf("%d ",a[i]);
    }

}