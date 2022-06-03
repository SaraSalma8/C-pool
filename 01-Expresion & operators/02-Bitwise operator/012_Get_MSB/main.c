/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/


/**
 * C program to check Most Significant Bit (MSB) of a number using bitwise operator
 */
/* Include stdio.h library
   To use printf and scanf function */
#include <stdio.h>

#define BITS sizeof(int) * 8 // Total bits required to represent integer
/* define the main function */
void main()
{
	/*define two variables from intger*/
    int num = 0;
	int msb = 0;

    /* Ask the user to enter value of the Number  */
    printf("\nEnter any number: ");
	/* Scan the value and stores it in variable num*/
    scanf("%d", &num);

    /* Move first bit of 1 to highest order */
    msb = 1 << (BITS - 1);

    /*Perform bitwise AND with msb and num */
    if(num & msb)
	{
		/* Condition is True and Print MSB is Set */
        printf("\nMSB of %d is set (1).", num);
	}
    else
	{
		/* Condition is False and Print MSB is unset */
        printf("]nMSB of %d is unset (0).", num);
	}
    
}