#include <math.h>
#include <stdio.h>
#include <stdlib.h>



int main()
{
    printf("WELCOME TO THE QUADRATIC EQUATION CALCULATOR.\n\n");
    printf("Quadratic equations come in the form ax^2 + bx +c\n");
    printf("Please input all coefficients in their decimal form.\n");

    /* creating variables to store user input*/
    double a;
    double b;
    double c;

    /*collect user input*/
    printf("\nPlease input the coefficint a: ");
    scanf("%lf", &a);

    printf("Please input the coefficint b: ");
    scanf("%lf", &b);

    printf("Please input the coefficint c: ");
    scanf("%lf", &c);

    double disc = (pow(b, 2)) - (4 * a *c); /*find the discrimiant*/

    if(a != 0){
        if(disc > 0){
            printf("\nYour equation has two real roots.");
            double root1 = (((-1)*b) + sqrt(disc)) / (2*a);
            double root2 = (((-1)*b) - sqrt(disc)) / (2*a);
            printf("\nThe two roots are %f and %f.", root1, root2);
        }

        else if(disc == 0){
            printf("\nYour equation has equal roots.");
            double rootequal = ((-1)*b) / (2*a);
            printf("\nThe sole equal roots is %f.", rootequal);
        }

        else{

            printf("\nYour equation has two complex/imaginary roots.");
            double realpartroot = ((-1)*b) / (2*a);
            double imaginarypartroot = (sqrt(-disc)) / (2 * a); /* the square root of a negative number is the same as its positive counterpart*/
            printf("\nThe two complex roots are %f + %fi and %f - %fi.", realpartroot, imaginarypartroot, realpartroot, imaginarypartroot);
            /*so we simply convert the complex answer discriminant to a positive number then find the correct squareroot before adding the correct
            notation in the print sentence*/
        }
    }

    else{
        printf("\nThis is not a valid quadratic equation.");
    }

    return 0;
}
