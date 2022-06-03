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
	/* Define three variables intger */
	int num = 0;         /* To store number Enterd by user */
	int temp = 0;        /* To store copy of num */
	int reverse_num = 0; /* To store Reverse of num */
	
	
	/* Ask user to enter number */
    printf("\nEnter number : ");
	/* scan number and store in variable num */
    scanf(" %d", &num);
	
	/*make copy of number and store in temp*/
	temp=num;
	
	/* Loop until temp equal zero */
	while (temp!=0 )  
   { 
    /* Calculate this Operation and put the Result in variable reverse_num  */
	reverse_num = reverse_num*10+(temp %10);
	/*To Make Division*/
	temp=temp/10;   
   }
   /* Check reverse_num Equal num */
   if(reverse_num==num)
   {
		/* print "this is number is palindrome" */
		printf("this is number is palindrome ");
   }
   else
   {
	   /* print "this is number is palindrome" */
	   printf("this is number is not palindrome ");
   }
}    
	