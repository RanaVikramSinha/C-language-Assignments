// 3. Write a function to sort an array of any size. (TSRN)

#include <stdio.h>

void sort(int[],int);

int main()
{
    int n;

    printf("Enter the size of an array in numbers\n");
    scanf("%d",&n);

    int a[n];

    sort(a,n);

    return 0;
}

void sort(int a[],int n)
{
    int i,j,c;

    printf("Enter %d numbers\n",n);

    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                c=a[i];
                a[i]=a[j];
                a[j]=c;
            }
        }
    }

    for(i=0;i<n;i++)
    printf("%d ",a[i]);

}