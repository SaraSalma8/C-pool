/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

/* Include stdio.h library
   To use printf and scanf function */
#include<stdio.h>
/* define the main function */
void main()
{
	/* Define four variables from integer */
	int course_one = 0;
	int course_two = 0;
	int course_three = 0;
	int total = 0;
	
    /* Ask the user to enter value of the degree of course one: */
	printf("\n enter the degree of course one:");
    /* Scan the value and stores it in course_one*/
	scanf(" %d",&course_one);
	
   /* Ask the user to enter value of the degree of course two: */
 	printf("\n enter the degree of course two:");
    /* Scan the value and stores it in course_two*/
	scanf(" %d",&course_two);
	
    /* Ask the user to enter value of the degree of course three: */
	printf("\n enter the degree of course three:");
    /* Scan the value and stores it in course_three*/
	scanf(" %d",&course_three);
	
	/*calculate the total and stores it in variable total*/
	total = course_one + course_two + course_three;
	
	/*Check total dgrees greater than 180 OR (math degree greater than 65 and total greater than 140) */
	if(total>=180 || ( (course_one>=65) && (total>=140) ))
	{
		/*Condition is true and print "the candidate is eligible for admission"*/
		printf("\n the candidate is eligible for admission");
	}
	else
	{
		/*Condition is false and print "the candidate is not eligible for admission"*/
		printf("\n the candidate is not eligible for admission");
	}
}

	