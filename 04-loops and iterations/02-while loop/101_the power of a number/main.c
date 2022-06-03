/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

/* Include stdio.h library
   To use printf and scanf function */
#include <stdio.h>
/* define the main function */
void main()
{
    /* Define two variables intger */	
	int num = 0;   /* To store number Enterd by user */ 
	int power = 0; /* To store power Enterd by user */

	/*define one variable long intger to store result */
    long int result = 1;  

    /* Ask user to enter number */
    printf("\nEnter number : ");
	/* scan number and store in variable num */
    scanf(" %d", &num);
	
	/* Ask user to enter power */
    printf("\nEnter a power : ");
	/* scan number and store in variable power */
    scanf(" %d", &power);
 
	/* loop until power equal zero */
    while (power != 0) 
    {
		/* Calculate this Operation and put the Result in variable result  */
        result *= num; 
		/* Decrement power */	
        power--;
    }
	/* Print result */
    printf("Answer = %d", result);

   
}