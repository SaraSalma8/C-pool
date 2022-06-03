/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

/**
 * C program to check Least Significant Bit (LSB) of a number using bitwise operator
 */
/* Include stdio.h library
   To use printf and scanf function */
#include<stdio.h>
/* define the main function */
void main()
{
	/* Define one variable from intger */
    int num = 0;

    /* Ask the user to enter value of the Number  */
    printf("\nEnter any number: ");
	/* Scan the value and stores it in variable num*/
    scanf(" %d", &num);

    /* check LSB of Num equal 1 or 0  */
    if(num & 1)
	{
		/* Condition is True and Print LSB is Set */
        printf("\nLSB of %d is set (1).", num);
	}
    else
	{
		/* Condition is False and Print LSB is Unset */
        printf("\nLSB of %d is unset (0).", num);
	}
   
}