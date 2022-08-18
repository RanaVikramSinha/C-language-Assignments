/* 4. Write a menu driven program with the following options:
    a. Check whether a given set of three numbers are lengths of an
    isosceles triangle or not
    b. Check whether a given set of three numbers are lengths of sides of
    a right angled triangle or not
    c. Check whether a given set of three numbers are equilateral triangle
    or not
    d. Exit*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char i;
    int a,b,c;

    while(1)
    {
        printf("\na. Check whether a given set of three numbers are lengths of an isosceles triangle or not\n");
        printf("b. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not\n");
        printf("c. Check whether a given set of three numbers are equilateral triangle or not\n");
        printf("d. Exit\n\n");
        
        printf("Enter a choice\n");
        fflush(stdin);
        scanf("%c",&i);

        switch(i)
        {
            case 97:
            printf("Enter Length of each 3 sides\n");
            scanf("%d %d %d",&a,&b,&c);
            if(a==b || b==c ||c==a)
            {
                printf("An Isosceles triangle\n");
                break;
            }

            else
            {
                printf("Not an Isosceles triangle\n");
                break;
            }

            case 98:
            printf("Enter Length of each 3 sides\n");
            scanf("%d %d %d",&a,&b,&c);
            if(a*a+b*b==c*c || b*b+c*c==a*a ||c*c+a*a==b*b)
            {
                printf("Right angled triangle\n");
                break;
            }
            
            else
            {
                printf("Not a Right angled triangle\n");
                break;
            }

            case 99:
            printf("Enter Length of each 3 sides\n");
            scanf("%d %d %d",&a,&b,&c);
            if(a==b && a==c)
            {
                printf("An Equilateral triangle\n");
                break;
            }
            
            else
            {
                printf("Not an Equilateral triangle\n");
                break;
            }

            case 100:
            exit(0);

            default:
            printf("Invalid Input\n");
        }
    }

    return 0;
}    