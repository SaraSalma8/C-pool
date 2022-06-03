/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

/* Include stdio.h library
   To use printf and scanf function */
#include <stdio.h>
/* define the main function */
void main ()
{
	/* Define one variable from signed intger */
	signed int number = 0; /* to store number entered by user*/
	
	/* Ask the user to enter value of The number */
	printf("\n Please enter the Number  ");
	/*Stores the number in variable number */
	scanf(" %d",&number);
	
	/*check if number postive or negative */
	if(number >= 0)
	{
		/*print The Number is a positive*/
		printf("\n %d is a postive number ",number);
	}
	else 
	{
		/*print The Number is a negtive*/
		printf("\n %d is a negative number ",number);
	}
}