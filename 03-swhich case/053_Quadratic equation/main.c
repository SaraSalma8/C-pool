/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/


/**
 * C program to find all roots of a quadratic equation using switch case
 */

/* Include stdio.h library
   To use printf and scanf function */
#include <stdio.h>
/* Include math.h library
   To use pow function */
   #include<math.h>
/* define the main function */
void main()
{
    /* Define six floating variables */
	float a = 0 ;
	float b = 0 ;
	float c = 0 ;
	float root1 = 0;
	float root2 = 0;
	float discriminant = 0;

    /*print the Equation*/
	printf("\n aX^2+bX+c = 0");
	
	/* Ask the user to enter value of a */
	printf("\n Please Enter The value of a = ");
	/*Stores the a number in variable a */
	scanf(" %f",&a);
	
	/* Ask the user to enter value of b */
	printf("\n Please Enter The value of b = ");
	/*Stores the b number in variable b */
	scanf(" %f",&b);
	
    /* Ask the user to enter value of c */
	printf("\n Please Enter The value of c = ");
	/*Stores the c number in variable c */
	scanf(" %f",&c);

    /* Calculate discriminant */
    discriminant = (b * b) - (4 * a * c);


    /* Compute roots of quadratic equation based on the nature of z */
    switch(discriminant > 0)
    {
		case 1:
           /* If discriminant is positive ((Condition is True)) */
		   /*Performs root1 and stores the result in variable root1*/
           root1 = (-b + pow(discriminant,0.5)) / (2 * a);
		   /*Performs root2 and stores the result in variable root2*/
           root2 = (-b - pow(discriminant,0.5)) / (2 * a);
           /*print Two Roots*/
           printf("Two distinct and real roots exists: %.2f and %.2f", root1, root2);
           break;
		   
        case 0:
            /* If discriminant is not positive (Condition is false)*/
            switch(discriminant < 0)
            {
                case 1:
                    /* If discriminant is negative(Condition is True) */
                    root1 = root2 = -b / (2 * a);
                    /*print Two Roots*/
                    printf("Two distinct complex roots exists: %.2f and %.2f ", root1, root2);
                    break;

                case 0:
                    /* If discriminant is zero ((Condition is false)*/
					
                    /*Print "no solution of this Equation "*/
		            printf("\n No Solution of this Equation");

                    break;
            }
		
    }

}