/* 9. Write a program to check whether a given number is an Armstrong number
or not */ 

#include <stdio.h>
#include <math.h>

int main()
{
    int num, temp, rem, sum = 0, count = 0 ;
  
    printf("Enter a number\n");
    scanf("%d", &num);
    
    temp = num;
    
    while(temp!=0)    
    {
        temp=temp / 10;
        count++;
    }
    
    temp=num;
    
    while(temp>0)     
    {
        rem=temp%10;
        sum=sum+pow(rem, count);
        temp=temp / 10;
    }
    
    if(sum==num)
    printf ("%d is an Armstrong number\n",num);
    else
    printf ("%d is not an Armstrong number\n",num);

    return 0;
}