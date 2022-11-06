#include <stdio.h>
#include <stdlib.h>

/*PROGRAM TO ACCEPT AND LIST THE NAMES OF 10 STUDENTS*/

/*create arrays to store students details*/

    char studentsSurname [10][20] = {};
    char studentsFirstName [10][20] = {};
    char studentsMiddleName [10][20] = {};

int main()
{

    int i = 0; /*variable to serve as a counter*/
    while(i < 10)
        {
        /*the following functions collect inout and store them in arrays*/
        printf("\nWhat is students %d surname:", i+1);
        fgets(studentsSurname[i], 10, stdin);

        printf("What is students %d first name:", i+1);
        fgets(studentsFirstName[i], 10, stdin);

        printf("What is students %d middle name:", i+1);
        fgets(studentsMiddleName[i], 10, stdin);
        i++;


    }
    printf("\nLIST OF STUDENTS NAMES\n\n");


    /*the following numbers them and then displays the name as inputted*/
    for(i = 0; i < 10; i++)
        {
        printf("%d.%s%s%s\n",i + 1, studentsSurname[i], studentsFirstName[i], studentsMiddleName[i]);
    }

    return 0;
}
