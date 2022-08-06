// 7. Write a program to find the position of first 1 in LSB.

#include <stdio.h>

int main()
{
    int n=6,count = 0,result;

    result = n&1;
    count++;

    if(result == 1)
    {
        printf("%d",count);
    }

    n = n>>1;

    result = n&1;
    count++;

    if(result == 1)
    {
        printf("%d",count);
    }
    
    n = n>>1;

    return 0;
}