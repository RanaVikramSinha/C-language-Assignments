// 4. Write a program to swap values of two int variables without using a third variable.

#include <stdio.h>

int main(){
    int a = 6,b = 7;

    a = a+b;
    b = a-b;
    a = a-b;

    printf("a is %d and b is %d\n",a,b);
    
    return 0;
}