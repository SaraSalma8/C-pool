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
   /* Define one variable from char */
	char character = 0 ; /* to store character entered by user*/
	
	/* Ask the user to enter the character */
	printf("\nPlease Enter The Character  ");
	/*Stores the character in variable character */
	scanf(" %c",&character);
	
	/*----------------------Using Bitwise Operation & IF condition -------------------------*/
	/*Check if the character is vowal or not */
	if(character == 'a' || character == 'o' || character == 'i' || character == 'u' || character == 'e' ||character == 'A' || character == 'O' || character == 'I' || character == 'U' || character == 'E')
	{
        /*print character is a vowal*/
		printf("\n %c is a Vowel",character);
	}
	else
	{
		/*print character is a constant*/
	    printf("\n%c is a Constant",character);
	}
	/*------------------------Another Solution using IF condition -------------------------*/
	/*check the character equal 'a' */
	if(character == 'a')
	{
		/*print character is a vowal*/
		printf("\n %c is a Vowel",character);
	}
	/*check the character equal 'o' */
	else if(character == 'o')
	{
		/*print character is a vowal*/
		printf("\n %c is a Vowel",character);
	}
	/*check the character equal 'i' */
	else if(character == 'i')
	{
		/*print character is a vowal*/
		printf("\n %c is a Vowel",character);
	}
	/*check the character equal 'u' */
	else if(character == 'u')
	{
		/*print character is a vowal*/
		printf("\n %c is a Vowel",character);
	}
	/*check the character equal 'e' */
	else if(character == 'e')
	{
		/*print character is a vowal*/
		printf("\n %c is a Vowel",character);
	}
	/*character is A constant */
	else if(character == 'A')
	{
		/*print character is a vowal*/
		printf("\n %c is a Vowel",character);
	}
	/*check the character equal 'O' */
	else if(character == 'O')
	{
		/*print character is a vowal*/
		printf("\n %c is a Vowel",character);
	}
	/*check the character equal 'I' */
	else if(character == 'I')
	{
		/*print character is a vowal*/
		printf("\n %c is a Vowel",character);
	}
	/*check the character equal 'U' */
	else if(character == 'U')
	{
		/*print character is a vowal*/
		printf("\n %c is a Vowel",character);
	}
	/*check the character equal 'E' */
	else if(character == 'E')
	{
		/*print character is a vowal*/
		printf("\n %c is a Vowel",character);
	}
	/*character is a constant */
	else
	{
		/*print character is a constant*/
		printf("\n%c is a Constant",character);
	}
	
}