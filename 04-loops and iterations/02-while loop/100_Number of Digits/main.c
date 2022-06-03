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
    /* Define two variables intger */	
	long int num = 0;   /* To store number Enterd by user */
    int count = 0;         /* To count Digits */
    
	/* Ask user to enter number */
    printf("\nEnter number : ");
	/* scan number and store in variable num */
    scanf(" %d", &num);

    /* Loop until num equal zero */
    while(num != 0)
    {
        /*To Make Division*/
        num /= 10;
       /* increament count */
        count++;
    }

    /* print the number of digits */
    printf("Number of digits: %d", count);
}