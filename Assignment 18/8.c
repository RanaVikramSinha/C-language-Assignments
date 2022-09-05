//8. Write a function to count words in a given string

#include <stdio.h>
#include <string.h>

void countWord(char*);

int main()
{
    char str[10000];

    printf("Enter the string\n");
    fgets(str,10000,stdin);
    str[strlen(str)-1]='\0';

    countWord(str);

    return 0;
}

void countWord(char str[])
{
    int i,count=1;

    for(i=0;str[i];i++)
    {
        if(str[i]==' ' && str[i+1]!='\0' && str[i+1]!=' ')
        count++;
    }

    printf("Number of Words => %d",count);

}