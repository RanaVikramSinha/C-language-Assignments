// 7. Write a function to check whether a given string is palindrome or not

#include <stdio.h>
#include <string.h>

void pali(char*);

int main()
{
    char str[100];

    printf("Enter the string\n");
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';

    pali(str);

    return 0;
}

void pali(char str[])
{
    int i,l,count=0;

    l=strlen(str);

    for(i=0;str[i];i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        str[i]=str[i]+32;
    }

    for(i=0;i<l;i++)
    {
        if(str[i]==str[l-1-i])
        count++;
    }

    if(count==l)
    printf("Palindrome string");

    else
    printf("Not a Palindrome string");
}