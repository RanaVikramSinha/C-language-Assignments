// 8. Write a program to check whether a given year is a leap year or not.

#include <stdio.h>

int main()
{
    int year;

    printf("Enter a year\n");
    scanf("%d",&year);

    if(year%4==0 && year%100!=0)
    printf("Leap year\n");

    else
    if(year%100==0 && year%400==0)
    printf("Leap year\n");

    else
    printf("Not leap year\n");

    return 0;
}