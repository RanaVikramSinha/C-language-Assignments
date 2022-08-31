// 10. Write a function in C to count the frequency of each element of an array.

#include <stdio.h>

void frequency(int[],int);

int main()
{
    int n,i;

    printf("Enter the size of an array\n");
    scanf("%d",&n);

    int a[n];

    frequency(a,n);

    return 0;
}

void frequency(int a[],int n)
{
    int i,freq[100000]={0};

    printf("Enter %d numbers\n",n);

    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    freq[a[i]]++;

    for(i=0;i<100000;i++)
    {
        if(freq[i]!=0)
        printf("%d = %d\n",i,freq[i]);
    }

}