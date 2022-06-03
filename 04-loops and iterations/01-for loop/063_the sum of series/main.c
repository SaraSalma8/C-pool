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
	/* define three variables intgers*/      
    int counter = 0 ; /* using in for loop */
	int number = 0 ;     /* to store number entered by user */
	int sum = 0 ;     /* to store sum of numbers */
	
	/*Ask user to Enter Number */
	printf("\nEnter any number = ");
	scanf(" %d",&number);
	
	printf("1+");
	/*Loop until counter greater than (number-1) to Display numbers */
	for(counter = 2 ; counter <= number-1 ; counter++)
	{
		/*Display numbers*/
		printf("1/%d+",counter);
	}
	/*loop to calculate sum */
	for(counter = 1 ; counter <= number ; counter++)
	{
		/*calculate sum */
		sum+= counter;
	}
	/*Display number*/
	printf("1/%d",number);
	/*print sum */
	printf("\nsum=1/%d",sum);
	
	
}