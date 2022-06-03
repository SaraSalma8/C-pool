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
	/* define two variable are intgers */
	int n = 1;
	int count = 1;
	/* define three variable are float */
	float x = 0;
	float term = 1;
	float sum = 1;
	
	/*Ask user to enter value of x */
	printf("\nEnter value of x: ");
	/*Scan number and stores in variables */
	scanf(" %f",&x);
	
	
	/* loop until n is greater than 100*/
	while (n <= 100)
	{
		/* Calculate this Operation and put the Result in variable term */
		term = term * x/n;
		/* Calculate this Operation and put the Result in variable sum */
		sum = sum + term;
		/*increment count*/
		count ++;
		/* if term is less than 0.0001 break loop*/
		if (term < 0.0001)
		{
			break;
		}
		else
		{
			/*increment n*/
			n ++;
		}
	}
	/*print numbers of Terms and Sum */
	printf("Terms = %d Sum = %f\n", count, sum);
}

