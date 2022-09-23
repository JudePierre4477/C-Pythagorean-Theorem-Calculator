#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h.>
#include <time.h>


    int main()
{

        printf("Choose a menu option from 1-4:\n ");
        printf("1. Calculate the value of the hypotenuse given the adjacent and opposite side values \n \n \n");
        printf("2. Calculate the value of the opposite side given the adjacent and hypotenuse values \n \n \n");
        printf("3. Calculate the value of the adjacent side given the opposite and hypotenuse values \n \n \n");
        printf("4. exit the application \n \n" );


    int input;
    scanf("%d",&input);


    if(input == 1)
    {
        printf("calculator for the hypotenuse, given the values of the adjacent and opposite side: \n \n \n ");

    } else if ( input == 2)

    {
        printf("Calculator for the opposite side, given the values of the adjacent and the hypotenuse: \n \n \n");

    } else if (input == 3)

    {
        printf("Calculator for the adjacent side, given the values of the opposite and hypotenuse: \n \n \n ");

    }else if (input == 4)
        {
        printf(" exit the application: \n \n");

        printf("Do you wish to save? Y/N: ");
        char q;

        getchar();

        scanf("%c", &q);

            if(q == 'Y' || q == 'y')
            {
                printf("Saving Changes!\n");

            }else if (q == 'N' || q == 'n')
            {
                printf("whatever\n");
            }else
            {
                printf(" Error value, terminating application either ways. \n ");
            }
        }


    if ( input == 1){

        double opposite;

        printf("Enter the value of the opposite side: \n \n");
        scanf(" %lf", &opposite);


        double adjacent;

        printf("Enter the value of the adjacent side: \n \n");
        scanf( "%lf", &adjacent);

        printf("The value you entered for the opposite side is: %lf\n \n The value you entered for the adjacent side is: %lf\n \n", opposite , adjacent);

        double hypotenuse = (sqrt) ((adjacent * adjacent) + (opposite * opposite));

        printf("The value of the hypotenuse side is: %f\n", hypotenuse);
        }

    else if ( input == 2){

        double adjacent_1;

        puts("Please note that the value of the adjacent side must be smaller than the hypotenuse side \n \n \n");

        printf("Enter the value of the adjacent side: \n \n");
        scanf(" %lf", &adjacent_1);

        double hypotenuse_1;

        printf("Enter the value of the hypotenuse side: \n \n");
        scanf("%lf", &hypotenuse_1);

        printf("The value you entered for the adjacent side is: %lf \n \n The value you entered for the hypotenuse is: %lf \n \n", adjacent_1, hypotenuse_1);

        double opposite_1 =  (sqrt) ((hypotenuse_1 * hypotenuse_1) - ( adjacent_1 * adjacent_1));

        printf(" The value of the opposite side is: %f \n", opposite_1);
        }

    else if (input == 3){

        double opposite_2;

        puts(" Note that the value of the opposite should be smaller than the hypotenuse side \n \n \n");

        printf("  Enter the value of the opposite side: \n \n");
        scanf(" %lf", &opposite_2);


        double hypotenuse_2;

        printf(" Enter the value of the hypotenuse side: \n \n");
        scanf(" %lf", &hypotenuse_2);

        printf(" The value entered for the opposite side is: %lf \n \n The value entered for the hypotenuse side is: %lf \n \n", opposite_2, hypotenuse_2);

        double adjacent_2 = (sqrt) ((hypotenuse_2 * hypotenuse_2) - (opposite_2 * opposite_2));

        printf(" The value of the adjacent side is: %f \n", adjacent_2);

    }

    //return 0;
}
