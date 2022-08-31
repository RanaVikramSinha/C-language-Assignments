/* 5. Write a function to find the first occurrence of 
adjacent duplicate values in the array. 
Function has to return the value of the element.*/ 

#include <stdio.h>

int adjDup(int[],int);

int main()
{
    int a[10]={1,2,3,4,5,6,7,7,8,9},c;

    c=adjDup(a,10);

    printf("First occurrence of adjacent duplicate values is %d\n",c);

    return 0;
}

int adjDup(int a[],int n)
{
    int i;

    for(i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1])
        return a[i];
    }
}