// 3. Write a program to swap values of two int variables

#include <stdio.h>

int main(){
    int a = 5,b = 6,c;

    c=a;
    a=b;
    b=c;

    printf("a is %d and b is %d\n",a,b);
    return 0;
}