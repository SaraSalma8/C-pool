/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

/**
 * C program to get lowest order set bit in a number
 */
/* Include stdio.h library
   To use printf and scanf function */
#include <stdio.h>

#define INT_SIZE sizeof(int) * 8 /* Integer size in bits */
/* define the main function */
void main()
{
	/*define three variables from intger*/
    int num = 0;     /* to store number from user*/
	int order = 0;  /* to store lowest order of set bit in a number*/
    int	i = 0;       /* to using as counter in for loop */

     /* Ask the user to enter value of the Number  */
    printf("\nEnter any number: ");
	/* Scan the value and stores it in variable num*/
    scanf(" %d", &num);
	

    /* Initially set the order to max size of integer */
    order = INT_SIZE - 1;

    /* Iterate through each bit of integer */
    for(i=0; i<INT_SIZE; i++)
    {
        /* If current bit is set */
        if((num>>i) & 1)
        {
			/* store value of i in order */
            order = i;

            /* Terminate the loop */
            break;
        }
    }
    /* print the position of the first one in a number*/
    printf("Lowest order set bit in %d is %d", num, order);

}