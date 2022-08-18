/* 6. Program to check whether a year is a leap year or not. Using switch
statement */

#include <stdio.h>

int main()
{
    int year;

    printf("Enter a year\n");
    scanf("%d",&year);

    switch(year%100==0) // Condition true means 1 and  Condition false means 0
    {
        case 1:
        switch(year%400==0) // Condition true means 1 and  Condition false means 0
        {
            case 1:printf("Leap year\n");
            break;

            case 0:printf("Not a leap year\n");
            break;

        }
        break;

        case 0:
        switch(year%4==0) // Condition true means 1 and  Condition false means 0
        {
            case 1:printf("Leap year\n");
            break;

            case 0:printf("Not a leap year\n");
            break;

        }
        break;
    }    
    return 0;
}