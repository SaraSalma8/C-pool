/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/


/**
 * C program to check Even or Odd number using switch case
 */
 
/* Include stdio.h library
   To use printf and scanf function */
#include <stdio.h>
/* define the main function */
void main()
{
    /*Define one variable intger */
    int num = 0;  /* to store number enterd by user */

    /* Ask user to enter number */
    printf("\n Please Enter Number = ");
    /* Scan number and stores it in variable num */
    scanf(" %d",&num);

    /* Expression (num % 2) will return either 0 or 1 */
    switch(num % 2)
    {
        /* If n%2 == 0 */
        case 0: 
		    /* print "Number is Even" */
            printf("Number is Even");
            break;

        /* Else if n%2 == 1 */
        case 1: 
		    /* print "Number is Odd" */
            printf("Number is Odd");
            break;
    }
}