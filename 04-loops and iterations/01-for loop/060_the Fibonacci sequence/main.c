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
	int num_terms = 0;  /* to store number entered by user */
	int counter = 0;    /* using in for loop */
	int term1 = 0;      /* store term1*/
	int term2 = 1;      /* store term2*/
	int next_term = 0;  /* store next term*/
    
	/*Ask user to Enter number of terms */
    printf("Enter the number of terms: ");
	/*Scan number and store in variable num_terms */
    scanf(" %d",&num_terms);     

	/*to display the Result*/
    printf("Fibonacci Series: "); 
	
	/* for loop until counter greater than num_terms */
    for (counter = 1 ; counter <= num_terms ; counter++) 
    {
		/*print the value of term1*/
        printf("%d, ", term1);   
		/*to put the result in variable next_term*/
        next_term = term1 + term2;
		/*to put value of term2 in term1*/
        term1 = term2;
		/*to put value of next_term in term2*/
        term2 = next_term;
    }
}