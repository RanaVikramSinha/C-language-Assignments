/*9. Write a function in C to merge two arrays of the same size sorted in descending order.*/

#include <stdio.h>

void merge(int[],int,int[],int);

int main()
{
    int n1,n2,i,j,temp;

    printf("Enter the size of a first array\n");
    scanf("%d",&n1);

    int a[n1];

    printf("Enter %d numbers\n",n1);

    for(i=0;i<n1;i++)
    scanf("%d",&a[i]);

    for(i=0;i<n1-1;i++)
    {
        for(j=i+1;j<n1;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    printf("Enter the size of a first array\n");
    scanf("%d",&n2);

    int b[n2];

    printf("Enter %d numbers\n",n2);

    for(i=0;i<n2;i++)
    scanf("%d",&b[i]);

    for(i=0;i<n2-1;i++)
    {
        for(j=i+1;j<n2;j++)
        {
            if(b[i]<b[j])
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }

    merge(a,n1,b,n2);

    return 0;
}

void merge(int a[],int n1,int b[],int n2)
{
    int c[n1+n2],i=0,j=0,k=0;

    while(i<n1 && j<n2)
    {
        if(a[i]>b[j])
        {
            c[k]=a[i];
            i++;
            k++;
        }

        else
        {
            c[k]=b[j];
            j++;
            k++;
        }
    }

    while(i<n1)
    {
        c[k]=a[i];
        i++;
        k++;
    }

    while(j<n2)
    {
        c[k]=b[j];
        j++;
        k++;
    }

    for(k=0;k<n1+n2;k++)
    printf("%d ",c[k]);

}