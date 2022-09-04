// 9. Write a C program to sort a string array in ascending order.

#include <stdio.h>

int main()
{
    char str[100];
    int i,j,temp;

    printf("Enter the string\n");
    gets(str);

    printf("\n");

    for(i=0;str[i];i++)
    {
        for(j=i+1;j<str[j];j++)
        {
            if(str[i]>str[j] && str[j]!='\0')
            {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
            
        }
    }

    printf("Sorted String :\n");
    printf("%s",str);

    return 0;
}    