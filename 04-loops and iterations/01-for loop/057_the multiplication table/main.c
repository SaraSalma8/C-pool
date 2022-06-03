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
	/* define two variables intgers*/      
	int num = 0 ;     /* to store number entered by user */
	int counter = 0 ; /* using in for loop */
	
	/* Ask user to enter number */
    printf("\nInput the number (Table to be calculated) : ");
	/* scan number and store in variable num */
    scanf(" %d", &num);
	/*Print New Line*/ 
	printf("\n");
	/*loop count from 1 to 10 */
	for(counter = 1 ; counter <= 10 ; counter++)
	{
		/* print Table */
		printf("%d X %d = %d \n",num,counter,num*counter);
	}
} 