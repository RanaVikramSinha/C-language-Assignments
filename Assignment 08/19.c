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

    for(i=1;i<=3;i++)
    {
        for(j=1;j<=19;j++)
        {
            if(j>=4-i && j<=6+i || j>=14-i && j<=16+i)
            printf("*");

            else
            printf(" ");
        }
        printf("\n");
    }

    printf("******MySirG*******\n");

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