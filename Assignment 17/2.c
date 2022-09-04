// 2. Write a program to count the occurrence of a given character in a given string.

#include <stdio.h>

int main()
{
    char str[150],freq[150]={0};
    int i;

    printf("Enter the string\n");
    gets(str);

    for(i=0;str[i];i++)
    {
        freq[str[i]]++;
    }

    printf("\n");

    for(i=0;i<150;i++)
    {
        if(freq[i]!=0)
        printf("Occurrence of %c in %s is %d\n",i,str,freq[i]);
    }
    
    return 0;
}