/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

/* Include stdio.h library
   To use printf and scanf function */
#include <stdio.h>
/* define the main function */
void  main()
{
	/*Define One variable Intger*/
	float sum = 0;     /* to store sum */
	int n = 0;         /* to store number enterd by user */
	int counter = 0;   /* using in for loop */
	
	/*Ask user to Enter n */
	printf ("\nEnter value of n: ");
	/*Scan number and store in variable n */
	scanf(" %d",&n);
	/*Loop until counter greater than n */
	for( counter = 1 ; counter <= n ; counter++ )
	{
		/* Calculate this Operation and put the Result in variable sum (Explicit casting for counter) */
		sum = sum + 1/(float)counter ;
		/*print counter and sum */
		printf("%d   %f\n",counter,sum) ;
	}
}