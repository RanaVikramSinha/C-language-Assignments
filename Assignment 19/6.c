// 6. Write a program to print the strings which are palindrome in the list of strings.

#include <stdio.h>
#include <string.h>

int main()
{
    int n;

    printf("Enter the number of strings you wants to store in a list\n");
    scanf("%d",&n);
    fflush(stdin);

    char str[n][50];
    int i,j,l,count;

    for(i=0;i<n;i++)
    {
        printf("Enter the string %d\n",i+1);
        fgets(str[i],50,stdin);
        str[i][strlen(str[i])-1]='\0';
        strlwr(str[i]);  
    }

    printf("Palindrome strings:\n");

    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0,l=strlen(str[i]);j<l;j++)
        {
            if(str[i][j]==str[i][l-1-j])
            count++;

            if(count==l)
            {
                printf("%s\n",str[i]);
            }
        }
        
    }   

    return 0;
}