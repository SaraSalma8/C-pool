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
	 /* Define three Floats */
    float firstNumber = 0;
	float secondNumber = 0;
	float result = 0;
	/* Ask the user to enter value of first number */
    printf("Enter the first number: ");

    /*Stores the first floating number in variable firstNumber */ 
    scanf(" %f", &firstNumber);  
    /* Ask the user to enter value of Second number */
    printf("\nEnter the second number: ");

    /*Stores the second floating number in variable secondNumber  */ 
   scanf(" %f", &secondNumber); 

    /*Performs multiplication and stores the result in variable result Of Two Numbers*/
    result = firstNumber * secondNumber;  

    /* Result up to 2 decimal point is displayed using %.2f */
    printf("\nresult = %.2f", result);
    
   
}