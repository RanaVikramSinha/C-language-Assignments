// 7. Write a program in C to count the total number of alphabets, digits and special characters in a string.

#include <stdio.h>

int main()
{
    char str[100];
    int i,alpha=0,digit=0,special=0;

    printf("Enter the string\n");
    gets(str);

    printf("\n");

    for(i=0;str[i];i++)
    {
        if(str[i]>='A'&& str[i]<='Z'||str[i]>='a'&& str[i]<='z')
        alpha++;

        else if(str[i]>='0'&& str[i]<='9')
        digit++;

        else if(str[i]>=33 && str[i]<=47||str[i]>=58 && str[i]<=64||str[i]>=91 && str[i]<=96||str[i]>=123 && str[i]<=126)
        special++;
    }

    printf("Total number of alphabets is %d\n",alpha);
    printf("Total number of digits is %d\n",digit);
    printf("Total number of special characters is %d\n",special);

    return 0;
}