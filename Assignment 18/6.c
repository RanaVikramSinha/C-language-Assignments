/* 6. Write a function to check whether a given string is an alphanumeric string or not. 
(Alphanumeric string must contain at least one alphabet and one digit) */

#include <stdio.h>
#include <string.h>

void alphanum(char*);

int main()
{
    char str[100];

    printf("Enter the string\n");
    fgets(str,100,stdin);

    str[strlen(str)-1]='\0';

    alphanum(str);
    
    return 0;
}

void alphanum(char str[])
{
    int i,alpha=0,num=0;

    for(i=0;str[i];i++)
    {
        if(str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]<='z')
        alpha++;

        else if(str[i]>='0' && str[i]<='9')
        num++;
    }

    if(alpha!=0 && num!=0)
    printf("Alphanumeric string");

    else
    printf("Not an Alphanumeric string");

}