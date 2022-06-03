/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/


/**
 * C program to clear the nth bit of a number
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
    int	newNum = 0;            /* to store value of new number after clear bit*/

    /* Ask the user to enter value of the Number  */
    printf("\nEnter any number: ");
	/* Scan the value and stores it in variable num*/
    scanf(" %d", &num);

    /* Ask the user to enter bit position you want to clear in the Number  */
    printf("Enter nth bit to set (0-31): ");
	/* Scan the value and stores it in variable n*/
    scanf("%d", &n);
    /*
     * Left shifts 1 to n times
     * Perform complement of above
     * finally perform bitwise AND with num and result of above
     */
    newNum = num & (~(1 << n));
	
    /*print this "Bit cleared successfully." */
    printf("Bit cleared successfully.\n\n");
	/* print number befor clearing */
    printf("Number before clearing %d bit: %d (in decimal)\n", n, num);
	/* print number after clearing */
    printf("Number after clearing %d bit: %d (in decimal)\n", n, newNum);

 
}