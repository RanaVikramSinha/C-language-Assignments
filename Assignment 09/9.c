/* 9. Program to Convert even number into its upper nearest odd number
Switch Statement. */

#include <stdio.h>

int main()
{
    int i;

    printf("Enter a number\n");
    scanf("%d",&i);

    switch(i%2==0)
    {
        case 1: printf("%d",i+1);
                break;

        case 0: printf("%d",i);
                break;
    }
    
    return 0;
}