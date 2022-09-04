// 10. Write a program in C to Find the Frequency of Characters.

#include <stdio.h>

int main()
{
    char str[150];
    int i,freq[150]={0};

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
        printf("Frequency of %c in %s is %d\n",i,str,freq[i]);
    }
    return 0;
}