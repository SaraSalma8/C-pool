/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/


/**
 * C program to print day of week using switch case
 */

/* Include stdio.h library
   To use printf and scanf function */
#include <stdio.h>
/* define the main function */
void main()
{
	/*Define one variable intger */
    int day_in_week = 0;  /* to store number day in week enter by user */
    
    /*Ask user to enter number day in week*/
    printf("\nEnter number day in week(1-7): ");
	/*Scan number and stores in variable day_in_week*/
    scanf(" %d",&day_in_week);
    
	/*Check day_in_week*/
    switch(day_in_week)
    {
        case 1: 
            printf("\nMonday");
            break;
        case 2: 
            printf("\nTuesday");
            break;
        case 3: 
            printf("\nWednesday");
            break;
        case 4: 
            printf("\nThursday");
            break;
        case 5: 
            printf("\nFriday");
            break;
        case 6: 
            printf("\nSaturday");
            break;
        case 7: 
            printf("\nSunday");
            break;
        default: 
            printf("\nInvalid input! Please enter week number between 1-7.\n");
			break;
    }

}