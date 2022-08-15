/*
 
   1234321
   123 321
   12   21
   1     1
   
*/

#include <stdio.h>

int main()
{
    int i,j;
    
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j<=5-i || j>=3+i)
            {
                if(j<=4)
                printf("%d",j);

                else
                printf("%d",8-j);
            }
            
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}