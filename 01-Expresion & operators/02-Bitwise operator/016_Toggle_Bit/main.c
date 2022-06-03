/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

/**
 * C program to toggle the nth bit of a number
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
    int	newNum = 0;            /* to store value of new number after toggle bit*/

    /* Ask the user to enter value of the Number  */
    printf("\nEnter any number: ");
	/* Scan the value and stores it in variable num*/
    scanf(" %d", &num);

    /* Ask the user to enter bit position you want to toggle in the Number  */
    printf("Enter nth bit to set (0-31): ");
	/* Scan the value and stores it in variable n*/
    scanf("%d", &n);
    /*
     * Left shifts 1 to n times
     * finally perform bitwise XOR with num and result of above
     */
    newNum = num ^ (1 << n);
	
    /*print this "Bit toggled successfully." */
    printf("Bit toggled successfully.\n\n");
	/* print number befor toggle */
    printf("Number before toggle %d bit: %d (in decimal)\n", n, num);
	/* print number after toggle */
    printf("Number after toggle %d bit: %d (in decimal)\n", n, newNum);

}