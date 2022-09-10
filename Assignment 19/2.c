// 2. Write a program to sort 10 city names stored in two dimensional arrays, taken from the user.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[10][150],temp[150];
    int i,j;

    printf("Enter 10 City names \n");
    for(i=0;i<10;i++)
    {
        printf("Enter the name of City %d\n",i+1);
        fgets(str[i],150,stdin);
        str[i][strlen(str[i])-1]='\0';  
    }

    for(i=0;i<9;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(strcmp(str[i],str[j])>0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }

    for(i=0;i<10;i++)
    {
        printf("%s ",str[i]);
    }

    return 0;
}