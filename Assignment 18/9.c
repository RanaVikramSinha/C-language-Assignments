/* 9. Write a function to reverse a string word wise.
(For example if the given string is “Mysirg Education Services” 
then the resulting string should be “Services Education Mysirg”) */

#include <stdio.h>
#include <string.h>

void revWordWise(char*);

int main()
{
    char str[300];
    
    printf("Enter the string\n");
    fgets(str,300,stdin);

    str[strlen(str)-1]='\0';

    revWordWise(str);

    return 0;
}

void revWordWise(char str[])
{
    printf("Original String is %s\n",str);

    strrev(str);

    char word[100],result[300]="";
    int i,j;

    strcat(str," ");

    for(i=0,j=0;str[i];i++)
    {
        if(str[i]==' ')
        {
            word[j]='\0';
            strrev(word);
            strcat(result,word);
            strcat(result," ");
            j=0;
        }

        else
        {
            word[j]=str[i];
            j++;
        }
    }

    printf("Reverse of String is %s",result);

}