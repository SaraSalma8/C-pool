/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/


/**
 * C program to find maximum between two numbers using conditional operator
 */
/* Include stdio.h library
   To use printf and scanf function */
#include <stdio.h>
/* define the main function */
void main()
{
	/*define three number of intger */
    int num1 = 0;   /* to store number one enterd by user*/
	int num2 = 0;   /* to store number two enterd by user*/
	int max = 0;    /* to store maximum number */
	
	 /* Ask the user to enter value of the first Number  */
    printf("\nEnter the first number: ");
	/* Scan the value and stores it in variable num1*/
    scanf(" %d", &num1);
	
	/* Ask the user to enter value of the second Number  */
    printf("\nEnter the second number: ");
	/* Scan the value and stores it in variable num2*/
    scanf(" %d", &num2);

    /*
     * If num1 > num2 then
     *     assign num1 to max
     * else
     *     assign num2 to max
     *  and store the maximum in varable max 
     */
    max = (num1 > num2) ? num1 : num2;

    /*print maximum number */
    printf("Maximum between %d and %d is %d", num1, num2, max);

}