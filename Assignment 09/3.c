/* 3. Write a program which takes the day number of a week and displays a
unique greeting message for the day.*/ 

#include <stdio.h>

int main()
{
    int n;

    printf("Enter the day number of a week\n");
    scanf("%d",&n);

    switch(n)
    {
        case 1:
        printf("Howdy!\n");
        break;

        case 2:
        printf("Ahoy!\n");
        break;

        case 3:
        printf("Dude What's going on ?\n");
        break;

        case 4:
        printf("Nice to meet you\n");
        break;

        case 5:
        printf("It's great to see you\n");
        break;

        case 6:
        printf("Yo!\n");
        break;

        case 7:printf("What's up ?\n");
        break;

        default:
        printf("Invalid Day Number of a Week\n");
    }
    return 0;
}