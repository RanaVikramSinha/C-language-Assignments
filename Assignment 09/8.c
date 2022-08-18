/* 8. Program to convert a positive number into a negative number and negative
number into a positive number using a switch statement. */

#include <stdio.h>

int main()
{
    int i;

    printf("Enter a number\n");
    scanf("%d",&i);

    switch(i>0)
    {
        case 1: printf("%d",-i);
                break;

        case 0: if(i==0)
                {
                    printf("0 is neither +ve number nor -ve number\n");
                    break;
                }

                else
                {
                    printf("%d",-i);
                    break;
                }        
    }

    return 0;
}