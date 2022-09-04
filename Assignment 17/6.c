// 6. Write a program to reverse a string.

#include <stdio.h>

int main()
{
    char str[100];
    int i,count=0,temp;
    
    printf("Enter the string\n");

    gets(str);

    for(i=0;str[i];i++)
    count++;

    for(i=0;i<count/2;i++)
    {
        temp=str[i];
        str[i]=str[count-1-i];
        str[count-1-i]=temp;
    }

    printf("%s",str);

    return 0;
}