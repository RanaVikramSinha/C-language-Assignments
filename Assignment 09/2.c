/* 2. Write a menu driven program with the following options:
      a. Addition
      b. Subtraction
      c. Multiplication
      d. Division
      e. Exit 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char i;
    double a,b;
    
    while(1)
    {
        printf("\na. Addition\n");
        printf("b. Subtraction\n");
        printf("c. Multiplication\n");
        printf("d. Division\n");
        printf("e. Exit\n");

        printf("Enter a choice number\n");
        fflush(stdin);
        scanf("%c",&i);

        switch(i)
        {
            case 97:
            printf("Enter a numbers\n");
            scanf("%lf %lf",&a,&b);
            printf("Addition is %.2lf\n",a+b);
            break;

            case 98:
            printf("Enter a numbers\n");
            scanf("%lf %lf",&a,&b);
            printf("Difference is %.2lf\n",a-b);
            break;

            case 99:
            printf("Enter a numbers\n");
            scanf("%lf %lf",&a,&b);
            printf("Product is %.2lf\n",a*b);
            break;

            case 100:
            printf("Enter a numbers\n");
            scanf("%lf %lf",&a,&b);
            printf("Division is %.2lf\n",a/b);
            break;

            case 101:
            exit(0);

            default :
            printf("Invalid choice\n");
        }
    } 
    return 0;
}