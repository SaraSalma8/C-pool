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
	/* define two variables from int */
	int units   = 0; /* to store number of units enterd by user */
	int custnum = 0; /* to store customer number enterd by user */
	/* define one variable float */
	float charges = 0; /* to store charges */
	
	/*Ask user to Enter customer number */
	printf("\nPlease Enter Customer Number : ");
	/*scan number and stores in variable custnum */
	scanf(" %d",&custnum);
	
	/*Ask user to Enter number of units */
	printf("\nPlease Enter Number of units : ");
	/*scan number and stores in variable units */
	scanf(" %d",&units);
	
	
	/* if units less than and equal 200 , charges = 0.5*units */
	if (units <= 200)
	{
	   /*clculate charges*/
	   charges = 0.5 * units;
	}
	/* if units less than and equal 400  , charges = 100+0.65*(units-200) */
	else if (units <= 400)
	{
		/*clculate charges*/
	    charges = 100 + 0.65 * (units - 200);
	}
	/* if units less than and equal 600  , charges = 230+0.8*(units-400) */
	else if (units <= 600)
	{
		/*clculate charges*/
	    charges = 230 + 0.8 * (units - 400);
	}
	/* if units greater than 600  , charges = 390+(units-600) */
	else
	{
		/*clculate charges*/
	    charges = 390 + (units - 600);
	}
	/*print Customer number and Charges */
	printf("\n\nCustomer No: %d:\n Charges = %.2f\n",custnum, charges);
}