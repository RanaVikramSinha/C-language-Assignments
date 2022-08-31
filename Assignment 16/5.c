// 5. Write a program in C to find the sum of left diagonals of a matrix.

#include <stdio.h>

int main()
{
    int n,sum=0;

    printf("Enter the size of a matrix\n");
    scanf("%d",&n);

    int a[n][n],i,j;

    printf("Enter %d numbers\n",n*n);

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("The value of [%d] [%d]\t",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nMatrix is\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {

            printf("%d\t",a[i][j]);
        }

        printf("\n");
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            sum=sum+a[i][j];
        }
    }

    printf("\nThe sum of left diagonals is %d\n",sum);

    return 0;
}