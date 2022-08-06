/* 12. Assume price of 1 USD is INR 76.23. 
Write a program to take the amount in INR and convert it into USD.*/

#include <stdio.h>

int main(){
    int INR;

    printf("Enter INR\n");
    scanf("%d",&INR);

    float USD = INR*76.23;

    printf("%d INR = %f USD\n",INR,USD);

    return 0;
}