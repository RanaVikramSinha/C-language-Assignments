/* Write a program to print greater between two numbers. 
Print one number of both are the same. */

#include <stdio.h>

int main(){
    int n1 = 7,n2 = 8;

    if(n1>n2)
    printf("%d is greater than %d\n",n1,n2);

    else

        if(n2>n1)
        printf("%d is greater than %d\n",n2,n1);

        else
        printf("Both %d and %d are same\n",n1,n2);

    return 0;
}