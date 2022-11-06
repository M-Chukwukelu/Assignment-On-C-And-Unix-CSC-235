#include <stdio.h>
#include <stdlib.h>

/*PROGRAM TO REVERSE A SENTENCE*/

int main()
{
    printf("WELCOME TO THE SENTENCE REVERSER.\n\n");

    char sentence[1000]; /*container to store the sentence*/

    printf("Please enter the sentence:");
    fgets(sentence, 1000, stdin); /*retrieve user input*/

    int length = strlen(sentence);

    printf("\nThis is the reversed sentence:");

    int i = length -1;

    while(i>=0){ /*access each character and print it out*/
        printf("%c", sentence[i]);
        i--;
    }

    return 0;
}
