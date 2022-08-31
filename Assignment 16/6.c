// 6. Write a program in C to find the sum of rows and columns of a Matrix.

#include <stdio.h>

int main()
{
    int n1,n2,sumRow,sumCol;

    printf("Enter the size of row and colume of a matrix\n");
    scanf("%d %d",&n1,&n2);

    int a[n1][n2],i,j,k=0;

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
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<n1;i++)
    {
        sumRow=sumCol=0;

        for(j=0;j<n2;j++)
        {
           sumRow=sumRow+a[i][j];
           sumCol=sumCol+a[j][i]; 
        }

        k++;

        printf("Sum of Row %d = %d and Sum of Colume %d = %d\n",k,sumRow,k,sumCol);
    }

    return 0;
}