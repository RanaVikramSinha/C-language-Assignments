/* 7. Program to take the value from the user as input electricity unit charges
    and calculate total electricity bill according to the given condition.Using
    the switch statement.

    For the first 50 units Rs. 0.50/unit
    For the next 100 units Rs. 0.75/unit
    For the next 100 units Rs. 1.20/unit
    For units above 250 Rs. 1.50/unit
    An additional surcharge of 20% is added to the bill. */

#include <stdio.h>

int main()
{
    double i,cost,bill;

    printf("Enter the number of units\n");
    scanf("%lf",&i);

    switch(i<=50)
    {
        case 1: cost=i*0.50;
                break;

        case 0: switch(i<=150)
                {
                    case 1: cost=25+(i-50)*0.75;
                    break;

                    case 0: switch(i<=250)
                            {
                                case 1: cost=100+(i-150)*1.20;
                                break;

                                case 0: cost=220+(i-250)*1.50;
                                break;
                            }
                            break;
                }
                break;        
    }

    bill=cost+cost*0.20;

    printf("Total Electricity Bill is %lf\n",bill);

    return 0;
}