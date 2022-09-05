// 1. Write a function to calculate length of the string

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int l;

    printf("Enter the string\n");
    fgets(str,100,stdin);

    str[strlen(str)-1]='\0';

    l=strlen(str);
    
    printf("The length (%s) is %d\n",str,l);

    return 0;
}