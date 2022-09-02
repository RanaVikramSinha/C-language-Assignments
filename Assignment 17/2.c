// 2. Write a program to count the occurrence of a given character in a given string.

#include <stdio.h>

int main()
{
    char str[100];
    int i,j,count;

    printf("Enter the string\n");
    gets(str);

    printf("\n");

    for(i=0;str[i];i++)
    {
        count=0;
        for(j=0;str[j];j++)
        {
            if(str[i]==str[j])
            count++;
        }

        printf("Occurrence of %c in (%s) is %d\n",str[i],str,count);

    }

    return 0;
}