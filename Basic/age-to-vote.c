#include <stdio.h>
#include <stdlib.h>

int main()
{

    // First instruction when running code is to clear screen of previous using clrscr() or system("clear");
    system("clear");

    int age;

    printf("Please enter your age: \n");
    scanf("%d", &age);

    // if, if-else, if-elseif-else, nested if's

    // if
    if (age >=18)
    {
        printf("You are eligible to vote.");
    }

    // else if
    else if (age =18)
    {
        printf("You may be able to vote soon.");
    }

    // else 
    else 
    {
        printf("You are not eligible to vote.");
    }
    
    return 0;
}