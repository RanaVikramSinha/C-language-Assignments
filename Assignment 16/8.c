// 8. Write a program in C to print or display an upper triangular of a given matrix.

#include <stdio.h>

int main()
{
    int n;

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

    printf("\nAn upper triangular values is\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i<j)
            printf("%d ",a[i][j]);
        }
    }

    return 0;
}