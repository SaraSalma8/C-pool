/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

/**
 * C program to print all even numbers from 1 to n
 */

/* Include stdio.h library
   To use printf and scanf function */
#include <stdio.h>
/* define the main function */
void main()
{
	/* Define Two variables intger */
    int End = 0;     /* to store End of range entered by user */
	int counter = 1; /* to use in while loop */
  
    /* Input upper limit of even number from user */
	/* Ask user to Enter upper limit */
    printf("\nPrint all even numbers till: ");
	/* Scan number and store i variable End */
    scanf(" %d",&End);
     
	
    printf("\nEven numbers from 1 to %d are: \n", End);

    /*loop until counter greater than End */
    while(counter <= End )
    { 
        /* Check if number is even */
        if(counter%2 == 0)
        {
			/* condition is true and print number */
            printf("%d\n",counter);
        }
		/* increment counter */
		counter++;
    }
}