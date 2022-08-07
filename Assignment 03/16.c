/* 16. Write a program to check whether a given character is an 
alphabet (uppercase), an alphabet (lower case), a digit or a special character.*/

#include <stdio.h>

int main()
{
    char a;

    printf("Enter a charater\n");
    scanf("%c",&a);

    if(a>=65 && a<=90)
    printf("Uppercase");

    else
    if(a>=97 && a<=122)
    printf("Lowercase");

    else
    if(a>=48 && a<=57)
    printf("Digit");

    else
    printf("Special character");

    return 0;
}