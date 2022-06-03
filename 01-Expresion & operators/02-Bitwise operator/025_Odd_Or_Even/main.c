
/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/


/**
 * C program to check even or odd number using bitwise operator
 */
/* Include stdio.h library
   To use printf and scanf function */
#include <stdio.h>

/* define the main function */
void main()
{
	/* define one variable from intger */
    int num = 0;  /* to store numbe from user*/

     /* Ask the user to enter value of the Number  */
    printf("\nEnter any number: ");
	/* Scan the value and stores it in variable num*/
    scanf(" %d", &num);
    
	/* check LSB in number Equal one or not */
    if(num & 1)
    {
		/* LSB is one that mean number in odd*/
		/*print the number is odd */
        printf("%d is odd.", num);
    }
    else
    {
		/* LSB is zero that mean number in even */
		/*print the number is even */
        printf("%d is even.", num);
    }
}