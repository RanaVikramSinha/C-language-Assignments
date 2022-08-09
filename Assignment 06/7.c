// 7. Write a program to count digits in a given number

#include <stdio.h>

int main()
{
    long long int n,count=0; 

    printf("Enter a number\n");
    scanf("%lld",&n);

    do
    {
        n=n/10;
        count++;
    }while(n);

    printf("Number of digit is %lld\n",count);

    return 0;
}