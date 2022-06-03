/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/


/**
 * C program to check leap year using conditional operator
 */
/* Include stdio.h library
   To use printf and scanf function */
#include <stdio.h>
/* define the main function */
void main()
{
	/* define one variable of intger */
    int year = 0; /* to store year entered by user */
 
    /* Ask the user to enter Year  */
    printf("\nEnter any year: ");
	/* Scan the value and stores it in variable year*/
    scanf(" %d", &year);

    /*
     * If year%4==0 and year%100==0 then
     *     print leap year
     * else if year%400==0 then
     *     print leap year
     * else
     *     print common year 
     */
	 if (year%4==0 && year%100!=0)
	 {
		 printf("\nLEAP YEAR");
	 }
	 else if(year%400 ==0)
	 {
		 printf("LEAP YEAR");
	 }
	 else
	 {
		 printf("\nCOMMON YEAR");
	 } 
}