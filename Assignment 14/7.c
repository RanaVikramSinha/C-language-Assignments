// 7. Write a program to find second largest in an array.Take array values from the user.

#include <stdio.h>

int main()
{
    int a[10],i,j,c;

    printf("Enter 10 numbers\n");

    for(i=0;i<10;i++)
    scanf("%d",&a[i]);

    for(i=0;i<10-1;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(a[i]>a[j])
            {
                c=a[i];
                a[i]=a[j];
                a[j]=c;
            }
            
        }
    }

    printf("Second largest number is %d\n",a[8]);

    return 0;
}