// 3. Write a program in C to find the transpose of a given matrix.

#include <stdio.h>

int main()
{
    int n1,n2;

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

    printf("\nMatrix is\n");

    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("\nThe transpose of a given matrix in (%d x %d) is\n",n2,n1);

    for(i=0;i<n2;i++)
    {
        for(j=0;j<n1;j++)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }

    return 0;
}