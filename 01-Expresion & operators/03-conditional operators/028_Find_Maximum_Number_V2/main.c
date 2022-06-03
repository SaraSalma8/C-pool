/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

/**
 * C program to find maximum between three numbers using conditional operator
 */
/* Include stdio.h library
   To use printf and scanf function */
#include <stdio.h>
/* define the main function */
void main()
{
	/*define four number of intger */
    /*define three number of intger */
    int num1 = 0;   /* to store number one enterd by user*/
	int num2 = 0;   /* to store number two enterd by user*/
	int num3 = 0;   /* to store number three enterd by user*/
	int max = 0;    /* to store maximum number */
	
	 /* Ask the user to enter value of the first Number  */
    printf("\nEnter the first number: ");
	/* Scan the value and stores it in variable num1*/
    scanf(" %d", &num1);
	
	/* Ask the user to enter value of the second Number  */
    printf("\nEnter the second number: ");
	/* Scan the value and stores it in variable num2*/
    scanf(" %d", &num2);
	
    /* Ask the user to enter value of the third Number  */
    printf("\nEnter the third number: ");
	/* Scan the value and stores it in variable num3*/
    scanf(" %d", &num3);
	

    /*
     * If num1 > num2 and num1 > num3 then
     *     assign num1 to max
     * else if num2 > num3 then
     *     assign num2 to max
     * else
     *     assign num3 to max
     *   and store the maximum number in variable max 
     */
    max = (num1 > num2 && num1 > num3) ? num1 :
          (num2 > num3) ? num2 : num3;
		  
    /*print maximum number */
    printf("\nMaximum between %d, %d and %d = %d", num1, num2, num3, max);

   
}