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
	/* Define Three integers */
	int number1 = 0;
	int number2 = 0;
	int rem = 0;
	/* Define One Float */
    float div = 0 ;
	/* Ask the user to enter value 1 */
	printf("Please Enter number 1: "); 

	/* Scan the value and save it in number1 */
	scanf("%d",&number1);                             
	
	/* Ask the user to enter value 2 */
	printf("Pleae Enter number 2:  ");

	/* Scan the value and save it in number1 */
	scanf("%d",&number2); 
    /* Check if number2 equal Zero or no */
	if (number2 != 0)
	{
	/*calculate the division and Explicit casting */                
	  div = (float)number1/number2;
	}
	/*calculate the reminder */  
	  rem=number1%number2;

	/*print the division value */
	printf("the division = %f\n",div);  
 
	/*print the reminder value*/
	printf("the reminder = %d",rem);

	
}