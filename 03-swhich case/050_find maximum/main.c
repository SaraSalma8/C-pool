/**
 * C program to find maximum between two numbers using switch case
 */
 
/* Include stdio.h library
   To use printf and scanf function */
#include <stdio.h>
/* define the main function */
void main()
{
	/*Define two variable intger */
    int num1 = 0;  /* to store number one enterd by user */
	int num2 = 0;  /* to store number two enterd by user */

    /* Ask user to enter first number */
    printf("\n Please Enter First Number = ");
    /* Scan number and stores it in variable num1 */
    scanf(" %d",&num1);
	
    /* Ask user to enter Second number */
    printf("\n Please Enter Second Number = ");
    /* Scan number and stores it in variable num2 */
    scanf(" %d",&num2);	

    /* Expression (num1 > num2) will return either 0 or 1 */
    switch(num1 > num2)
    {   
        /* If condition (num1>num2) is false */
        case 0: 
            /* print number2 maximum */		
            printf("\n%d is maximum\n", num2);
            break;

        /* If condition (num1>num2) is true */
        case 1: 
		    /* print number1 maximum */
            printf("\n%d is maximum\n", num1);
            break;
    }

}