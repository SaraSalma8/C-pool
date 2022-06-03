/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/


/**
 * C program to print number in words
 */
/* Include stdio.h library
   To use printf and scanf function */
#include <stdio.h>
/* define the main function */
void main()
{
	/* Define Two variable intger */
    int num = 0; /* to store number enterd by user */
    int n = 0 ;  /* to store reverse num */

    /* Ask user to enter number */
    printf("Enter any number to print in words: ");
	/* scan number and store in variable num */
    scanf(" %d", &num);

    /* Store reverse of num in n */
    while(num != 0)
    {
        n = (n * 10) + (num % 10);
        num /= 10;
    }

    /* 
     * Extract last digit of number and print corresponding digit in words
     * till num becomes 0
     */
    while(n != 0)
    {
        switch(n % 10)
        {
            case 0: 
                printf("Zero ");
                break;
            case 1: 
                printf("One ");
                break;
            case 2: 
                printf("Two ");
                break;
            case 3: 
                printf("Three ");
                break;
            case 4: 
                printf("Four ");
                break;
            case 5: 
                printf("Five ");
                break;
            case 6: 
                printf("Six ");
                break;
            case 7: 
                printf("Seven ");
                break;
            case 8: 
                printf("Eight ");
                break;
            case 9: 
                printf("Nine ");
                break;
        }
        
        n = n / 10;
    }

    
}