// 7. From the list of IP addresses, check whether all ip addresses are valid.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char ip[4][20]={"36.125.128.33","37.126.245.34","38.129.245","0.266.251.37"};
    int i,count;

    for(i=0;i<4;i++)
    {
        char *j=strtok(ip[i],".");
        count=0;

        while(j!=NULL)
        {
            int a=atoi(j);

            if(a>=0 && a<=255)
            count++;

            j=strtok(NULL,".");
        }

        if(count==4)
        printf("IP %dth is Valid IP address\n",i+1);

        else
        printf("IP %dth is Not Valid IP address\n",i+1);
    }
    return 0;
}