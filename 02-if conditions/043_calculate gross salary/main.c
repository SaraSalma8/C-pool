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
    /* define four Floating Variables*/
    float basic_salary = 0; /*to store basic salary enterd by user */
    float gross_salary = 0;        /*to store Calculated gross */
	float DA = 0;           /*to store Calculated DA */
	float HRA = 0;          /*to store Calculated HRA */

    /* Ask user to Enter basic salary of employee */
    printf("\nEnter basic salary of an employee: ");
	/*scan number and stores in variable basic_salary*/
    scanf(" %f", &basic_salary); 


    /* Calculate D.A and H.R.A according to specified conditions */
	
	/* to Check if variable basic salary smaller than Or equal 10000 */
    if(basic_salary <= 10000)  
    {
		/* Calculate this Operation and put the Result in variable DA */
        DA  = basic_salary * 0.8; 
        /* Calculate this Operation and put the Result in variable HRA */		
        HRA = basic_salary * 0.2;  
    }
	/* to Check if variable basic salary smaller than Or equal 20000 */
    else if(basic_salary <= 20000)
    {
		/* Calculate this Operation and put the Result in variable DA */
        DA  = basic_salary * 0.9;
	    /* Calculate this Operation and put the Result in variable HRA */
        HRA = basic_salary * 0.25;
    }
	/*basic salary greather than 20000*/
    else
    {
		/* Calculate this Operation and put the Result in variable DA */
        DA  = basic_salary * 0.95;
		/* Calculate this Operation and put the Result in variable HRA */
        HRA = basic_salary * 0.3;
    }

    /* Calculate gross salary */
    gross_salary = basic_salary + HRA + DA;

    /*print gross Salary */
    printf("GROSS SALARY OF EMPLOYEE = %.2f", gross_salary);

    
}