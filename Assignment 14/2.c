/* 2. Write a program to calculate the average of numbers stored in an array of size 10.
Take array values from the user.*/

#include <stdio.h>

int main()
{
    int a[10],i,sum=0;
    float avg;

    printf("Enter 10 numbers\n");

    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);

        sum=sum+a[i];
    }

    avg=(float)sum/10;

    printf("Average is %.2f\n",avg);
    
    return 0;
}