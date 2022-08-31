// 10. Write a program in C to find the row with maximum number of 1s.

#include <stdio.h>

int main()
{
    int a[3][3]={{1,0,1},
                {1,1,1},
                {0,1,1}};

    int i,j,count1=0,count2=0,rowNum;

    for(i=0;i<3;i++)
    {
        count1=0;

        for(j=0;j<3;j++)
        {
            if(a[i][j]==1)
            {
                count1++;
            }

            if(count1>count2)
            {
                count2=count1;
                rowNum=i;
            }
        }
    }

    printf("The %d row with maximum number of 1s\n",rowNum);

    return 0;
}