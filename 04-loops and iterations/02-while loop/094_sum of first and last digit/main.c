/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

/* Include stdio.h library
   To use printf and scanf function */
#include <stdio.h>
/* define the main function */
void main()
{
	/* define four variables intger */
    int num = 0;         /* to store number enterd by user */
	int sum = 0;         /* to store sum of firstDigit and lastDigit*/
	int firstDigit = 0;  /* to sore firstDigit of num */
	int lastDigit = 0;   /* to store lastDigit of num */

    /* Ask user to enre number */
    printf("\nEnter any number to find sum of first and last digit: ");
	/* Scan number and Store in variable num */
    scanf(" %d", &num);
    
    /* Find last digit to sum */
    lastDigit = num % 10;
   

    /* Copy num to first digit */
    firstDigit = num;

    /* Find the first digit by dividing num by 10 until first digit is left */
    while(num >= 10)
    {
        num = num / 10;
    }
    firstDigit = num;


    /* Find sum of first and last digit*/
    sum = firstDigit + lastDigit; 
    /* print Sum of first and last digit */
    printf("\nSum of first and last digit = %d", sum);

}