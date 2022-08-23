// 8. Write a function to print PASCAL Triangle. (TSRN)

#include <stdio.h>

int factorial(int);
int combination(int,int);
void pascal(int);

int main()
{
    int n;

    printf("Enter a number\n");
    scanf("%d",&n);

    pascal(n);

    return 0;
}

int factorial(int n)
{
    int i,f;

    for(i=1,f=1;i<=n;i++)
    {
        f=f*i;
    }

    return f;

}

int combination(int n, int r)
{
    int c;

    c=factorial(n)/(factorial(r)*factorial(n-r));

    return c;

}

void pascal(int n)
{
    int i,j,k,r;

    for(i=0;i<=n;i++)
    {
        k=1;
        r=0;

        for(j=0;j<=2*n;j++)
        {
            if(j>=n-i && j<=n+i && k)
            {
                printf("%d",combination(i,r));
                k=0;
                r++;
            }

            else
            {
                printf(" ");
                k=1;
            }
        }
        printf("\n");
    }
}