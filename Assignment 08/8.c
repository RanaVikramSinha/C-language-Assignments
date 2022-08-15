/*

   1    
  121   
 12321  
1234321

*/

#include <stdio.h>

int main()
{
    int i,j,k;
    
    for(i=1;i<=4;i++)
    {
        k=1;
        for(j=1;j<=4;j++)
        {
            if(j>=5-i)
            printf("%d",k++);

            else
            printf(" ");
        }

        k=1;
        for(j=1;j<=4;j++)
        {
            if(j>=i)
            printf(" ");

            else
            {
                printf("%d",i-k);
                k++;
            }
        }
        printf("\n");
    }

    return 0;
}