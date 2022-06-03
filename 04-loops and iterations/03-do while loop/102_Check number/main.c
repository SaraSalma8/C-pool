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
	/* Define two Number As integer*/
    int number = 0; /* to store number entered by user */
    char check='a'; /* to store Dicision entered by user */
	
	/*Loop With do while Exit when check not Equal 'c' */
  do{
    /* Ask user to enter  number */	  
	printf("Enter a number: ");
	/* Scan number and stores it in variable number */
    scanf(" %d", &number);    
	
	/*to Chck About number if Number Smaller Than Zero(Negative or Equal zero) */
    if (number <= 0)   
    {
		/*To check About number If Number Equal Zero */
        if (number == 0)  
		{  
	        /*number Equal Zero*/
	        /*Print "You entered 0*/
            printf("You entered 0");
		}
        else
		{
			/*number is Negative*/
			/*print"You entered a negative number" */
            printf("You entered a negative number."); 
		}
    }
    /* number is Postive*/
    else
	{
		/*print"You entered a positive number."*/
      printf("You entered a positive number."); 
	}
	/*Ask user to Enter The Dicision To Control In Exit This Problem*/
  	printf("\n if you continue press (c) \n exit press(e) \n");
	/*scan character ans store in variable check */
    scanf(" %c",&check); 
	
  }while(check=='c'); /*check if check Equal 'c'*/
  /*print "Program Exit*/
  printf("\nProgram Exist \n");
    
}