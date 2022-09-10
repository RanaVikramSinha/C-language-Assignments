// 4. Write a program to search a string in the list of strings.

#include <stdio.h>
#include <string.h>

int main()
{
    int n;

    printf("Enter the number of strings you wants to store in a list\n");
    scanf("%d",&n);
    fflush(stdin);

    char str[n][50],search[30];
    int i,flag=0;

    for(i=0;i<n;i++)
    {
        printf("Enter string %d\n",i+1);
        fgets(str[i],50,stdin);
        str[i][strlen(str[i])-1]='\0';
        strupr(str[i]);
    }

    printf("Enter the string you wants to found\n");
    fgets(search,30,stdin);
    search[strlen(search)-1]='\0';
    strupr(search);

    for(i=0;i<n;i++)
    {
        if(strcmp(str[i],search)==0)
        {
            printf("Your Search String Found in string %d\n",i+1);
            flag=1;
        }
    }

    if(flag==0)
    printf("Your Search String Not Found");

    return 0;
}