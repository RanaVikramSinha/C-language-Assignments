// 8. Given a list of words followed by two words, the task is to find the minimum distance between the given two words in the list of words. (Example : s = {“the”,”quick”,”brown”,”fox”,”quick”} word1 = “the”, word2 = “fox”, OUTPUT : 1 )

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char str[5][20]={"the","quick","brown","fox","quick"};
    char word1[]="the";
    char word2[]="fox";
    
    int i,a=-1,b=-1,min=100000,temp;

    for(i=0;i<5;i++)
    {
        if(strcmp(str[i],word1)==0)
        a=i;

        if(strcmp(str[i],word2)==0)
        b=i;

        if(a!=-1 && b!=-1)
        {
            temp=abs(a-b);

            if(temp<min)
            min=temp;
        }
    }

    printf("Distance between %s and %s is %d\n",word1,word2,min-1);

    return 0;
}