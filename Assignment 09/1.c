/* 1. Write a program which takes the month number as an input and display
number of days in that month. */ 

#include <stdio.h>

int main()
{
    int n;
    
    printf("Enter the Month Number\n");
    scanf("%d",&n);

    switch(n)
    {
        case 2:
        printf("28 or 29 Days(if a leap year)");
        break;

        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        printf("31 Days");
        break;

        case 4:
        case 6:
        case 9:
        case 11:
        printf("30 Days");
        break;

        default:
        printf("Invalid Month Number\n");
    }

    return 0;
}