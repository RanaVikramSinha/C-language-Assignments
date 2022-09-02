// 1. Write a program to calculate the length of the string.(without using built-in method)

#include <stdio.h>

int main()
{
    char str[100];
    int i;
    
    printf("Enter the string\n");

    gets(str);

    for(i=0;str[i];i++);

    printf("The length of (%s) is %d",str,i);

    return 0;
}