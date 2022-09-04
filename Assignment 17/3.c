// 3. Write a program to count vowels in a given string.

#include <stdio.h>

int main()
{
    char str[100];
    int i,count=0;

    printf("Enter the strings\n");
    gets(str);

    for(i=0;str[i];i++)
    {
        if(str[i]=='A'||str[i]=='a'||str[i]=='E'||str[i]=='e'||str[i]=='I'||str[i]=='i'||str[i]=='O'||str[i]=='o'||str[i]=='U'||str[i]=='u')
        count++;
    }

    printf("Total number of Vowels in (%s) is %d\n",str,count);

    return 0;
}