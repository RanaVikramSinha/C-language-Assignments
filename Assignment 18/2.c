// 2. Write a function to reverse a string.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("Enter the string\n");
    fgets(str,100,stdin);

    str[strlen(str)-1]='\0';

    strrev(str);
    
    printf("The reverse =>%s",str);

    return 0;
}