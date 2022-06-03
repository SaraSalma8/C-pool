/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/



/* Performs addition, subtraction, multiplication or division depending the input from user */

/* Include stdio.h library
   To use printf and scanf function */
#include <stdio.h>
/* define the main function */
void main()
{

    /* Define Variable As Char*/
    char operator = 0; /*to store operator enterd by user */
	
	/* Define This Variables AS float To Put Float Number*/
    float firstNumber = 0;  /* to store first number enterd by user */
	float secondNumber = 0; /* to store second number enterd by user */


    /* Ask user to enter first number */
    printf("\n Please Enter First Number = ");
    /* Scan number and stores it in variable firstNumber */
    scanf(" %f",&firstNumber);
	
	 /* Ask user to enter second number */
    printf("\n Please Enter Second Number = ");
    /* Scan number and stores it in variable secondNumber */
    scanf(" %f",&secondNumber);
	
    /*Ask user to enter operator */
    printf("Enter an operator (+, -, *,/): ");  
    /*Scan character and stores in variable operator */	
    scanf(" %c",&operator); 

	
	/* To Make Switch on operation Accroding The User */
    switch(operator)    
    {
		/* if User Chose (+) This Case Will Exquet*/
        case '+': 
            /* Print Equation */		
            printf("%.1f + %.1f = %.1f",firstNumber, secondNumber, firstNumber + secondNumber);
            break;
        /* if User Chose (-) This Case Will Exquet */
        case '-': 
		    /* Print Equation */
            printf("%.1f - %.1f = %.1f",firstNumber, secondNumber, firstNumber - secondNumber);
            break;
        /* if User Chose (*) This Case Will Exquet */
        case '*': 
		    /* Print Equation */
            printf("%.1f * %.1f = %.1f",firstNumber, secondNumber, firstNumber * secondNumber);
            break;
        /* if User Chose (/) This Case Will Exquet */
        case '/':
		    /* Check if Second number not equal Zero or not */
		    if(secondNumber !=0)
			{
				/* Print Equation */
                printf("%.1f / %.1f = %.1f",firstNumber, secondNumber, firstNumber / secondNumber);
			}
			else
			{
				printf("\nError! you can't divided by 0 ");
			}
            break;

        // operator doesn't match any case constant (+, -, *, /)
        default:
            printf("Error! operator is not correct\n");
			break;
    }
  
}