// 7. Write a program to print the first 10 even natural numbers in reverse order

#include <stdio.h>

int main()
{
    int i=10;

    while(i>0)
    {
        printf("%d\n",2*i);
        i--;
    }

    return 0;
}