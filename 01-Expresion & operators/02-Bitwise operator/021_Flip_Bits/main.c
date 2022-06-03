/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

/**
 * C program to count flip all bits of a binary number using bitwise operator
 */
/* Include stdio.h library
   To use printf and scanf function */
#include <stdio.h>

/* define the main function */
void main()
{
	/* define Two variable from intger */
    int num = 0 ;             /* to store number from user*/
	int flippedNumber = 0;    /* to store number after Flip*/

     /* Ask the user to enter value of the Number  */
    printf("\nEnter any number: ");
	/* Scan the value and stores it in variable num*/
    scanf(" %d", &num);
	
    /* calculate flip number and store in variable flippedNumber*/
    flippedNumber = ~num;
	
    /* print the number befor flipping */
    printf("Original number = %d (in decimal)\n", num);
	/* print the number after flipping */
    printf("Number after bits are flipped = %d (in decimal)", flippedNumber);

}