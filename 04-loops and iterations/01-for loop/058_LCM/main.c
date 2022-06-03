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
	/* define five variables intgers*/      
	int num1 = 0 ;     /* to store number1 entered by user */
	int num2 = 0 ;     /* to store number2 entered by user */
	int counter = 0 ;  /* using in for loop */
	int GCD = 0;       /* to store value of GCD */
	int LCM = 0;       /* to store value of LCM */
    

    printf("Enter two positive integers: ");
	/* Ask user to enter first number */
    printf("\nInput the number First Number: ");
	/* scan number and store in variable num1 */
    scanf(" %d", &num1);
	/* Ask user to enter Second number */
    printf("\nInput the number Second Number: ");
	/* scan number and store in variable num2 */
    scanf(" %d", &num2);
	
	/*loop until counter greater than num1 or num2 */
    for(counter = 1 ; counter <= num1 && counter <= num2; counter++)
    {
        /* Checks if i is factor of both integers*/
        if(num1%counter == 0 && num2%counter == 0)
		{
            GCD = counter;
		}
    }
	/* Calculate this Operation and put the Result in variable LCM  */
    LCM = (num1*num2)/GCD;
	/*Print LCM*/
    printf("The LCM of two numbers %d and %d is %d.", num1, num2, LCM);
}