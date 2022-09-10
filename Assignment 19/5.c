// 5. Suppose we have a list of email addresses, check whether all email addresses have ‘@’ in it. Print the odd email out.

#include <stdio.h>
#include <string.h>

int main()
{
    int n;

    printf("How many email address you wants to store in a list\n");
    scanf("%d",&n);
    fflush(stdin);

    char str[n][50];
    int i;

    for(i=0;i<n;i++)
    {
        printf("Enter email address %d\n",i+1);
        fgets(str[i],50,stdin);
        str[i][strlen(str[i])-1]='\0';  
    }

    printf("Print the odd email out:\n");

    for(i=0;i<n;i++)
    {
        if(strchr(str[i],'@')!=0)
        {
            printf("%s\n",str[i]);
        }
    }

    return 0;
}