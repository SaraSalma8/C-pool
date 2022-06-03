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
	/* Define one variable from intger*/
    int unit = 0;    /* to store enterd by user*/
	/* define three Floating Variables*/
    float amt = 0;       
	float total_amt = 0;
    float sur_charge = 0;

    /* Ask user to enterd unit consumed */
    printf("Enter total units consumed: ");
	/*scan number and stores in variable unit*/
    scanf(" %d", &unit);


    /* Calculate electricity bill according to given conditions */
	
	/*check if unit less than or equal 50*/ 
    if(unit <= 50)
    {
		/* Calculate this Operation and put the Result in variable amt */
        amt = (unit * 0.5);
    }
	/*check if unit less than or equal 150*/
    else if(unit <= 150)
    {
		/* Calculate this Operation and put the Result in variable amt */
        amt = (unit * 0.75);
    }
	/*check if unit less than or equal 250*/
    else if(unit <= 250)
    {
		/* Calculate this Operation and put the Result in variable amt */
        amt = (unit * 1.2);
    }
	/*check if unit greater than 250*/
    else
    {
		/* Calculate this Operation and put the Result in variable amt */
        amt = (unit * 1.5);
    }

    /*
     * Calculate total electricity bill
     * after adding surcharge
     */
    sur_charge = amt * 0.20;
    total_amt  = amt + sur_charge;

    /*print Electricity Bill */
    printf("Electricity Bill = Rs. %.2f", total_amt);

}