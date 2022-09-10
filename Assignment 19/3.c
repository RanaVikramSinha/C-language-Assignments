// 3. Write a program to read and display a 2D array of strings in C language.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[5][50];
    int i;

    for(i=0;i<5;i++)
    {
        printf("Enter string %d\n",i+1);
        fgets(str[i],50,stdin);
        str[i][strlen(str[i])-1]='\0';
    }

    // printf("Display 2-D Array of Stings\n");

    // for(i=0;i<5;i++)
    // {
    //     for(int j=0;j<50;j++)
    //     {
    //         printf("%c",str[i][j]);
    //     }
    //     printf("\n");
    // }

    printf("Display 2-D Array of Stings\n");

    for(i=0;i<5;i++)
    {
        puts(str[i]);
    }

    return 0;
}