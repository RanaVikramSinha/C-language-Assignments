// 9. Write a program in C to accept a matrix and determine whether it is a sparse matrix.

#include <stdio.h>

int main()
{
    int n1,n2,count=0;

    printf("Enter the size of row and colume of a matrix\n");
    scanf("%d %d",&n1,&n2);

    int a[n1][n2],i,j;

    printf("Enter %d numbers\n",n1*n2);

    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            printf("The value of [%d] [%d]\t",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(a[i][j]==0)
            count++;
            
        }
    }

    if(count>(n1*n2)/2)
    {
        printf("\nThis Matrix is a Sparse Matrix\n");

        for(i=0;i<n1;i++)
        {
            for(j=0;j<n2;j++)
            {

                printf("%d\t",a[i][j]);
            }

            printf("\n");
        }
    }

    else
    {
        printf("\nThis Matrix is Not a Sparse Matrix\n");

        for(i=0;i<n1;i++)
        {
            for(j=0;j<n2;j++)
            {

                printf("%d\t",a[i][j]);
            }

            printf("\n");
        }
    }

    return 0;
}