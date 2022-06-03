/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

/**
 * C program to convert decimal to binary number system
 */
/* Include stdio.h library
   To use printf and scanf function */
#include <stdio.h>

#define INT_SIZE sizeof(int) * 8 /* Size of int in bits */

/* define the main function */
void main()
{
	/* define three variable from intger */
    int num = 0;    /* to store numbe from user*/
	int index = 0;  /* to store index of array*/
	int i = 0;      /* using as counter in for loop*/
	
	/*define one array from intger */
    int bin[INT_SIZE] = {0};

     /* Ask the user to enter value of the Number  */
    printf("\nEnter any number: ");
	/* Scan the value and stores it in variable num*/
    scanf(" %d", &num);

    /* caluculate the maximum number of index */
    index = INT_SIZE - 1;

    /* loop until index = -1 */
    while(index >= 0)
    {
        /* Store LSB of num to bin */
        bin[index] = num & 1;

        /* Decrement index */
        index--;

        /* Right Shift num by 1 */
        num >>= 1;
    }

    /* Print converted binary */
    printf("Converted binary: ");
	/*using for loop to display number in array */
    for(i=0; i<INT_SIZE; i++)
    {
        printf("%d", bin[i]);
    }

}