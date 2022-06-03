
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
	/*Define three variables intger */
	  int row=1;      /* to store number of rows */
	  int column=0;   /* to store number of column */
	  int result=0;   /* to store resulat mutiplication (rows and Column) */
	  
	  
	  printf("MULTIPLACATION TABLE");
	  /* make new line */
	  printf("\n------------------------\n");
	  /* Loop until row equal or greater than 13 */
	   do{
		   /* loop to count column from 0 to 10 every once */
		  for(column = 1; column <= 10; column++)
		  {
			/* Calculate this Operation and put the Result in variable result */
			result = (column*row);
			/* print Result */
			printf("%d",result); 
			/* print Space */
			printf(" ");
		  }
		  /*print New line */
		  printf("\n");
		  /* increment row */
		  row++;
		  
	   }while(row<13); /* check if row less than 13 to continue loop or not */
  }