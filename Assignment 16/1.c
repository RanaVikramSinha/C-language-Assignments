// 1. Write a program to calculate the sum of two matrices each of order 3x3.

#include <stdio.h>

int main()
{
    int a[3][3],b[3][3],c[3][3],i,j;

    printf("Enter 9 numbers for first matrix\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("The value of [%d] [%d]\t",i,j);
            scanf("%d",&a[i][j]);
        }
        
    }

    printf("\nThe first matrix is\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {

            printf("%d\t",a[i][j]);
        }

        printf("\n");
    }
    
    printf("\nEnter 9 numbers for second matrix\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("The value of [%d] [%d]\t",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    printf("\nThe second matrix is\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",b[i][j]);
        }

        printf("\n");
    }

    printf("\nSum of two matrices is\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];

            printf("%d\t",c[i][j]);
        }

        printf("\n");
    }

    return 0;
}