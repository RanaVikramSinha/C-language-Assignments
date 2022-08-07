/* 10. Write a program which takes the cost price and selling price of a product from the user. 
Now calculate and print profit or loss percentage.*/

#include <stdio.h>

int main()
{
    double costPrice,sellPrice,p;

    printf("Enter a Cost price and Sell Price\n");
    scanf("%lf %lf",&costPrice,&sellPrice);

    p = (sellPrice - costPrice)/costPrice * 100;

    if(p>0)
    printf("Profit is %lf %%",p);

    else
    if(p<0)
    printf("Loss is %lf %%",p);

    else
    printf("%lf %% means NO PROFIT and NO LOSS");
     
    return 0;
}