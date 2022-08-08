// 5. Write a program to print the first 10 odd natural numbers in reverse order.

#include <stdio.h>

int main()
{
    int i=10;

    while(i>0)
    {
        printf("%d\n",2*i-1);
        i--;
    }
    
    return 0;
}