/* 3. Write a function to check whether a given number is even or odd. 
Return 1 if the number is even, otherwise return 0. (TSRS)*/

#include <stdio.h>

int oddEven(int);

int main()
{
    int n,num;

    printf("Enter a number\n");
    scanf("%d",&n);

    num=oddEven(n);

    if(num==1)
    printf("Even\n");
    
    else
    printf("Odd\n");

    return 0;
}

int oddEven(int n)
{
    if(n%2==0)
    return 1;

    else
    return 0;
}