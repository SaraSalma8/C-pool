/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/


/**
 * C program to count total of zeros and ones in a binary number using bitwise operator
 */
/* Include stdio.h library
   To use printf and scanf function */
#include <stdio.h>

#define INT_SIZE sizeof(int) * 8 /* Total number of bits in integer */

/* define the main function */
void main()
{
	/* define four variable from intger */
    int num = 0;        /* to store number from user*/
	int zeros = 0 ;     /* to store number of zeros in number */
	int ones = 0 ;      /* to store number of ones in number */
	int i = 0;          /* to using as counter in for loop */

    /* Ask the user to enter value of the Number  */
    printf("\nEnter any number: ");
	/* Scan the value and stores it in variable num*/
    scanf(" %d", &num);

    /* Iterate over each bit of integer */
    for(i=0; i<INT_SIZE; i++)
    {
        /* If LSB is set then increment ones otherwise zeros */
        if(num & 1)
		{
			/*increment ones*/
            ones++;
		}
        else
		{
			/*increment zeros*/
            zeros++;
		}

        /* Right shift bits of num to one position */
        num >>= 1;
    }
    /* print number of zeros */
    printf("Total zero bit is %d\n", zeros);
	/* print number of zeros */
    printf("Total one bit is %d", ones);

}