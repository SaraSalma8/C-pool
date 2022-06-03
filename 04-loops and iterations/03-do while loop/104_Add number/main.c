/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/


// Program to add numbers until user enters zero

/* Include stdio.h library
   To use printf and scanf function */
#include <stdio.h>
/* define the main function */
void main()
{
	/* define Two variabled double */
    double number = 0; /* to store number entered by user */
	double sum = 0;    /* to store result of addition numbers */

    // body of loop is executed at least once
	/* loop until user enter Zero (number equal Zero) */
    do
    {
		/* Ask user to enter number */
        printf("\nEnter a number: ");
		/* scan number and store it in variable number */
        scanf(" %lf",&number);
		/* Calculate this Operation and put the Result in variable sum */
        sum += number;
		
    } while(number != 0.0);  /* Check if number not Equal zero */

    /* Print Sum of numbers */
    printf("\nSum = %.2lf",sum);
   
}