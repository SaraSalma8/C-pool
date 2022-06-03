
/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

/**
 * C program to check whether a triangle is valid or not if angles are given
 */

/* Include stdio.h library
   To use printf and scanf function */
#include <stdio.h>
/* define the main function */
void main()
{
	/* Define four varibales from float */
    float angle1 = 0; /* to store Angle one Enterd by user*/
	float angle2 = 0; /* to store Angle two Enterd by user*/
	float angle3 = 0; /* to store Angle three Enterd by user*/
	float sum    = 0; /* to store sum of angles */
	
    /* Ask user to Enter First Angle*/
	printf("\n Enter First Angle = ");
	/* Scan Number and Stores in variable angle1 */
	scanf(" %f",&angle1);
	
	/* Ask user to Enter Second Angle*/
	printf("\n Enter Second Angle = ");
	/* Scan Number and Stores in variable angle2 */
	scanf(" %f",&angle2);
	
	/* Ask user to Enter Third Angle*/
	printf("\n Enter third Angle = ");
	/* Scan Number and Stores in variable angle3 */
	scanf(" %f",&angle3);

    /* Calculate sum of angles */
    sum = angle1 + angle2 + angle3; 

    /*
     * If sum of angles is 180 and
     * angle1, angle2, angle3 is not 0 then
     * triangle is valid.
     */
    if(sum == 180 && angle1 != 0 && angle2 != 0 && angle3 != 0) 
    {
		/* print "Triangle is valid" */
        printf("\nTriangle is valid.");
    }
    else
    {
		/* print "Triangle is not valid" */
        printf("\nTriangle is not valid.");
    }
	

}