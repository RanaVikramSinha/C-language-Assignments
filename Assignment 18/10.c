// 10. Write a function to find the repeated character in a given string.

#include <stdio.h>
#include <string.h>

void repChar(char*);

int main()
{
    char str[150];
    
    printf("Enter the string\n");
    fgets(str,120,stdin);

    str[strlen(str)-1]='\0';

    repChar(str);

    return 0;
}

void repChar(char str[])
{
    int i,freq[150]={0};

    for(i=0;str[i];i++)
    freq[str[i]]++;

    for(i=0;i<150;i++)
    {
        if(freq[i]!=0 && freq[i]!=1)
        printf("Repeated character is %c in %s\n",i,str);
    }
}