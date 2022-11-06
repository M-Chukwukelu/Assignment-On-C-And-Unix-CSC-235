#include <stdio.h>
#include <stdlib.h>

/*PROGRAM TO COUNT FROM 1 - N. N IS A NUMBER SUPPLIED BY THE USER*/
int main()
{
    int n; /*make an integer to store user input*/

    printf("WELCOME TO THE NUMBER COUNTER.\n");

    printf("Please enter the number you want to count from 1 to: ");
    scanf("%d", &n); /*retrieve user input*/

    printf("Thank you.\nHere we go!");

    int i;
    for (i = 1; i <= n; i++){ /* for loop to serve as a counter*/
        printf("\n%d", i);
    }
    return 0;
}
