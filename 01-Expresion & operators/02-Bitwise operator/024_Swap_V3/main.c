/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

/**
 * C program to swap two numbers using bitwise operator
 */
/* Include stdio.h library
   To use printf and scanf function */
#include <stdio.h>

/* define the main function */
void main()
{
	/* define two variable from intger */
    int num1 = 0;  /* to store number1 from user*/
	int num2 = 0;  /* to store number2 from user*/

    /* Ask the user to enter value of the first Number  */
    printf("\nEnter the first number: ");
	/* Scan the value and stores it in variable num1*/
    scanf(" %d", &num1);
	
	/* Ask the user to enter value of the second Number  */
    printf("\nEnter the second number: ");
	/* Scan the value and stores it in variable num2*/
    scanf(" %d", &num2);
	
    /* print numbers befor swapping */
    printf("Original value of num1 = %d\n", num1);
    printf("Original value of num2 = %d\n", num2);

    /* Swap two numbers */
    num1 ^= num2;
    num2 ^= num1;
    num1 ^= num2;

    /* print numbers after swapping */
    printf("Num1 after swapping = %d\n", num1);
    printf("Num2 after swapping = %d\n", num2);

   
}