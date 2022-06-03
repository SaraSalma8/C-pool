/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

/**
 * C program to find sum of its digits of a number
 */
/* Include stdio.h library
   To use printf and scanf function */
#include <stdio.h>
/* define the main function */
void main()
{
	/* Define Two variable intger */
    int num = 0; /* to store number enterd by user */
	int sum = 0; /* to store sum of all digit numbers */

    /* Ask user to enter number */
    printf("\nEnter any number to find sum of its digit: ");
	/* scan number and store in variable num */
    scanf(" %d", &num);

    /* Repeat till num becomes 0 */
    while(num!=0)
    {
        /* Find last digit of num and add to sum */
        sum += num % 10;

        /* Remove last digit from num */
        num = num / 10;
    }
    /* print sum */
    printf("Sum of digits = %d", sum);

}