/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/


/**
 * C program to check even or odd number using conditional operator
 */
/* Include stdio.h library
   To use printf and scanf function */
#include <stdio.h>
/* define the main function */
void main()
{
	/*define one varaible from intger */
    int num = 0;  /* to store numbe from user*/

     /* Ask the user to enter value of the Number  */
    printf("\nEnter any number: ");
	/* Scan the value and stores it in variable num*/
    scanf(" %d", &num);

    /* 
     * If n%2==0 then 
     *     print it is even
     * else
     *     print it is odd
     */
    if (num%2 == 0) 
	{
		/*condition is true and number is even and print that */
        printf("The number is EVEN") ;
	}
	else 
	{
		/*condition is false and number is odd and print that */
        printf("The number is ODD");
	}
    
}