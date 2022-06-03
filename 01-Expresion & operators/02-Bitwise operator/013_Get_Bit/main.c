/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

/**
 * C program to get the nth bit of a number
 */
/* Include stdio.h library
   To use printf and scanf function */
#include <stdio.h>
/* define the main function */
void main()
{
	/*define three variables from intger*/
    int num = 0;         /* to store number from user*/
	int n = 0;           /* to store nth bit from user*/
    int	bitStatus = 0;   /* to store value of this bit in number*/

    /* Ask the user to enter value of the Number  */
    printf("\nEnter any number: ");
	/* Scan the value and stores it in variable num*/
    scanf(" %d", &num);

   /* Ask the user to enter bit position you want to check in the Number  */
    printf("\nEnter nth bit to check (0-31): ");
	/* Scan the value and stores it in variable n*/
    scanf("%d", &n);

    /* Right shift num, n times and perform bitwise AND with 1 */
    bitStatus = (num >> n) & 1;
    /*print the value of the bit*/
    printf("\nThe %d bit is set to %d", n, bitStatus);

   
}