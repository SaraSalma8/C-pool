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
      /* Define two integers */
      int firstNumber = 0;
	  int secondNumber = 0;

      /* Ask the user to enter value of first number */
      printf("Enter first number: ");

     /* Scan the value and save it in first number */
      scanf("%d", &firstNumber);

      /* Ask the user to enter value of second number */
      printf("Enter second number: ");

     /* Scan the value and save it in second number */
      scanf("%d",&secondNumber);

      // the new Value of firstNumber is sum the firstNumber and the secondNumber 
      firstNumber = firstNumber+secondNumber;

      //  Value of secondNumber after swapping is subtraction the new Value of firstNumber and the secondNumber 
      secondNumber = firstNumber-secondNumber;

      // Value of firstNumber after swapping is subtraction the new Value of firstNumber and the  value of secondNumber after swapping
      firstNumber = firstNumber-secondNumber;
      printf("\n ......After swapping...... ");
      printf("\nfirstNumber = %d\n", firstNumber);
      printf("secondNumber = %d", secondNumber);

    
}