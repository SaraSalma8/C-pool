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
    /* define three variables intgers*/      
    int counter = 0 ; /* using in for loop */
	int num = 0 ;     /* to store number entered by user */
	int sum=0;        /* to store sum of numbers */
    /* define one variable float */
	float avg = 0;    /* to store average of numbers */
	
    /* input 10 numbers from user */
	printf("Input the 10 numbers : \n");
	/*Loop to input 10 numbers from user */
	for (counter = 1 ; counter <= 10 ; counter++)
	{
		/* print index of number and input number from user */
        printf("Number-%d :",counter);
		/* scan number and store in variable num */  
		scanf(" %d",&num);
		/* calculate the sum of numbers */
		sum +=num;
	}
	/* calculate the Avarage of numbers */
	avg=sum/10.0;
	printf("The sum of 10 no is : %d\nThe Average is : %f\n",sum,avg);
 
}