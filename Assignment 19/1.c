// 1. Write a program to find the number of vowels in each of the 5 strings stored in two dimensional arrays, taken from the user.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[5][150];
    int i,j,v;

    for(i=0;i<5;i++)
    {
        printf("Enter the string %d\n",i+1);
        fgets(str[i],150,stdin);
        str[i][strlen(str[i])-1]='\0';
    }

    for(i=0;i<5;i++)
    {
        v=0;
        for(j=0;str[i][j]!='\0';j++)
        {
            if(str[i][j]=='A'||str[i][j]=='a'||str[i][j]=='E'||str[i][j]=='e'||str[i][j]=='I'||str[i][j]=='i'||str[i][j]=='O'||str[i][j]=='o'||str[i][j]=='U'||str[i][j]=='u')
            v++;
        }

        printf("%s have %d vowels\n",str[i],v);
        
    }

    return 0;
}