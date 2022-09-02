// 8. Write a program in C to copy one string to another string.

#include <stdio.h>

int main()
{
    char str1[100],str2[100]="\0";
    int i;

    printf("Enter the string\n");
    gets(str1);

    printf("\n");

    for(i=0;str1[i];i++)
    str2[i]=str1[i];

    printf("Original String ==> %s\n",str1);
    printf("Copy of an Original String ==> %s\n",str2);

    return 0;
}