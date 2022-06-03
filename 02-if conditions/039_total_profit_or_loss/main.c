/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

/**
 * C program to calculate profit or loss
 */

/* Include stdio.h library
   To use printf and scanf function */
#include <stdio.h>
/* define the main function */
 void main()
{
	/* define three variable from int */
    int cost_price    = 0 ; /* to store cost price enterd by user */ 
    int selling_price = 0 ; /* to store selling price enterd by user */
	int amount        = 0 ; /* to store loss or profit */
	
	/*Ask user to Enter cost price */
    printf("\nEnter cost price: ");
	/*scan number and stores in variable cost price*/
    scanf(" %d", &cost_price);
	
	/*Ask user to Enter selling price */
    printf("Enter selling price: ");
	/*scan number and stores in variable cost price*/
    scanf(" %d", &selling_price);
	
	
    /*check selling price greater than cost price */
    if(selling_price > cost_price)
    {
        /* Condition is true and Calculate Profit */
        amount = selling_price - cost_price ;
        printf("\nProfit = %d", amount);
    }
	 /*check cost price greater than selling price */
    else if(cost_price > selling_price)
    {
        /* Condition is true and Calculate Loss */
        amount = cost_price - selling_price   ;
        printf("\nLoss = %d", amount);
    }
    else
    {
        /* Neither profit nor loss */
        printf("No Profit No Loss.");
    }

}