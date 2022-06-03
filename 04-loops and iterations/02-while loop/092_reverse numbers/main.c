/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

/*program to all natural numbers in reverse from n to 1*/

/* Include stdio.h library
   To use printf and scanf function */
#include <stdio.h>
/* define the main function */
void main()
{
	/* Define two variable Intger */
	int start = 0;          /* to store number enterd by user */
	int decrement_num = 0;  /* to decrement start in this variable */
	
	/* Ask user to enter number of start */ 
	printf("Enter starting value:");
	/* scan number and store in variable start */
	scanf("%d",&start);
	
	/* make decrement_num equal start */
	decrement_num = start ;
	
	/*Run loop from 'start' to 1 and decrement 1 in each iteration 
	until decrement_num equal less than 1 */
	while (decrement_num >= 1)
	{
		/* print decrement_num */
		printf("%d\n",decrement_num);
		/* decrement (decrement_num)*/
		decrement_num--;	
	}
	
}
