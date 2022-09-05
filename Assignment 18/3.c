// 3. Write a function to compare two strings.

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100],str2[100];
    int r;

    printf("Enter the First string\n");
    fgets(str1,100,stdin);

    str1[strlen(str1)-1]='\0';

    printf("Enter the second string\n");
    fgets(str1,100,stdin);

    str2[strlen(str2)-1]='\0';

    r=strcmp(str1,str2);
    
    if(r==-1)
    printf("Two Strings by comparing is in Dictionary order\n");

    if(r==0)
    printf("Two Strings by comparing is equal\n");

    if(r==1)
    printf("Two Strings by comparing is in opposite of Dictionary order\n");

    return 0;
}