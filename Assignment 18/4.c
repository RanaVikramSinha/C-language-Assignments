// 4. Write a function to transform string into uppercase

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("Enter the string\n");
    fgets(str,100,stdin);

    str[strlen(str)-1]='\0';

    strupr(str);
    
    printf("%s",str);

    return 0;
}