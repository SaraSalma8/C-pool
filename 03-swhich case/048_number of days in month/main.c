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
	/* Define one variable intger*/
    int month = 0; /* to store number of month enterd by user */

    /*Ask user to enter  month number  */
    printf("\nEnter month number (1-12): ");
	/*Scan number and stores in variable month */
    scanf(" %d",&month);  
	
	/*check month out of range from 1 to 12 */
	if((month > 12)|| (month < 1))
   {
	    printf("\nInvalid input! Please enter month number between (1-12).\n");
	
   }
   /* switch case */
   switch(month)
   {
	   /* Months(January, March, May, July, August, October, December) */
	   case 1:
	   case 3:
	   case 5:
	   case 7:
	   case 8:
	   case 10:
	   case 12:
	           printf("\n31 days\n");
			    break;
	   /* February */		
	   case 2:
		       printf("\n28 or 29 days\n");
		 	    break;
	   /* Months(April, June, September, November) */		
	   case 4:
	   case 6:
	   case 9:
	   case 11:
			    printf("\n30 days\n");
			    break;
   }
	   
}