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
    int counter = 0 ; /* using in for loop */
	int num = 0 ;     /* to store number entered by user */

	/*Ask user to Enter Number */
    printf("Enter the number: ");
	/* scan number and store in variable num */  
	scanf(" %d",&num);
   
	printf("Factors of %d are: ",num);
	/*for loop until counter greater than num */
    for(counter = 1; counter <= num ; counter++)
    {
		/* to Check Reminder of counter*/
        if (num%counter == 0) 
        {
			/*if reminder is zero counter is a factor of num */
            printf("%d ",counter);
        }
    }
}