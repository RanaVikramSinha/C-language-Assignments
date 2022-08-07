// 12. Write a program to check whether a given alphabet is in uppercase or lowercase.

#include <stdio.h>

int main()
{
    char a;

    printf("Enter a charater\n");
    scanf("%c",&a);

    if(a>=65 && a<=90)
    printf("Uppercase");

    else
    printf("Lowercase");

    return 0;
}