/*

  *****     *****  
 *******   ******* 
********* *********
******MySirG*******
 ***************** 
  ***************  
   *************
    ***********
     *********
      *******
       *****
        ***
         *
         
*/

#include <stdio.h>

int main()
{
    int i,j;

    for(i=1;i<=4;i++)
    {
        for(j=1;j<=19;j++)
        {
            if(i==4 && j==7)
            printf("MySirG");

            if(i==4 && j>=7 && j<=12)
            continue;

            if(j>=4-i && j<=6+i || j>=14-i && j<=16+i)
            printf("*");

            else
            printf(" ");
        }
        printf("\n");
    }

    for(i=1;i<=9;i++)
    {
        for(j=1;j<=18;j++)
        {
            if(j>=i+1 && j<=19-i)
            printf("*");

            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}