/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

/**
 * C program to check whether a triangle is Equilateral, Isosceles or Scalene
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

    /* Check angle1=angle2=angle3 */
    if(angle1 == angle2 && angle2==angle3) 
    {
        /* Condition is true and print "Equilateral triangle" */
        printf("Equilateral triangle.");
    }
	/* Check angle1=angle2 OR angle1=angle2 OR angle2=angle3 */
    else if(angle1 == angle2 || angle1 == angle3 || angle2 == angle3) 
    {
        /* Condition is true If any two angles are equal and print "Isosceles triangle" */
        printf("Isosceles triangle.");
    }
    else 
    {
        /* If none angles are equal and print "Scalenetriangle" */
        printf("Scalene triangle.");
    }

}