/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

/**
 * C program to set the nth bit of a number
 */

/* Include stdio.h library
   To use printf and scanf function */
#include <stdio.h>
/* define the main function */
void main()
{
 
   /*define three variables from intger*/
    int num = 0;         /* to store number from user*/
	int n = 0;                 /* to store nth bit from user*/
    int	newNum = 0;            /* to store value of new number after set bit*/

    /* Ask the user to enter value of the Number  */
    printf("\nEnter any number: ");
	/* Scan the value and stores it in variable num*/
    scanf(" %d", &num);

    /* Ask the user to enter bit position you want to set in the Number  */
    printf("Enter nth bit to set (0-31): ");
	/* Scan the value and stores it in variable n*/
    scanf("%d", &n);

    /* Left shift 1, n times and perform bitwise OR with num */
    newNum = (1 << n) | num;
	
    /*print this "Bit set successfully." */
    printf("Bit set successfully.\n\n");
	/* print number befor setting */
    printf("Number before setting %d bit: %d (in decimal)\n", n, num);
	/* print number after setting */
    printf("Number after setting %d bit: %d (in decimal)\n", n, newNum);

}