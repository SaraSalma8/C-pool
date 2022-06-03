/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

/**
 * C program to check alphabets using Conditional operator
 */
/* Include stdio.h library
   To use printf and scanf function */
#include <stdio.h>
/* define the main function */
void main()
{
	/* define one variable from char */
    char ch = 0;
    
    /* Ask the user to enter character   */
    printf("Enter any character: ");
	/* Scan the value and stores it in variable ch*/
    scanf(" %c", &ch);
    
    /*
     * If (ch>'a' and ch<'z') or (ch>'A' and ch<'Z') then
     *     print alphabet
     * else
     *     print not alphabet
     */
	 if  ( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') )
	 {
		 printf("\nIt is ALPHABET");
	 }
	 else 
	 {
		 printf("\nIt is NOT ALPHABET");
	 }
	 /*------------------------------Another Solution---------------------------*/
    (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') 
        ? printf("\nIt is ALPHABET")
        : printf("\nIt is NOT ALPHABET");

    
}