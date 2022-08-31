/* 4. Write a function to rotate an array by n position in d direction. 
The d is an indicative value for left or right. 
(For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and d is left, 
then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )*/

#include <stdio.h>

void left(int[],int,int);
void right(int[],int,int);

int main()
{
    int n,i;

    printf("Enter the size of an array\n");
    scanf("%d",&n);

    int a[n],d;

    printf("Enter %d numbers\n",n);

    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("Enter the +ve position number for left direction shifts OR -ve position number right direction shifts\n");
    scanf("%d",&d);

    if(d>0)
    left(a,n,d);

    else
    right(a,n,d);

    return 0;
}

void left(int a[], int n, int d)
{
    int i,temp,j;

    for(i=0;i<d;i++)
    {
        temp=a[0];

        for(j=0;j<n-1;j++)
        {
            a[j]=a[j+1];
        }

        a[n-1]=temp;
    }

    for(j=0;j<n;j++)
    printf("%d ",a[j]);
}

void right(int a[], int n, int d)
{
    int i,temp,j;

    for(i=0;i>d;i--)
    {
        temp=a[n-1];

        for(j=n-1;j>0;j--)
        {
            a[j]=a[j-1];
        }

        a[0]=temp;
    }

    for(j=0;j<n;j++)
    printf("%d ",a[j]);
}