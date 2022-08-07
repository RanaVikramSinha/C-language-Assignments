/* Write a program which takes the month number as an input and 
display number of days in that month*/ 

#include <stdio.h>

int main()
{
    int m;

    printf("Enter month number\n");
    scanf("%d",&m);

    if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
    printf("31 days\n");

    else
    if(m==4 || m==6 || m==9 || m==11)
    printf("30 days\n");

    else
    printf("28 days or 29 days (if Leap year)\n");

    return 0;
}