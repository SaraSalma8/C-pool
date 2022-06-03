
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
	/* Define two variable intger */
    int num = 0; /* to store number enterd by user */
	int i = 2 ;
	
	/* Ask user to enter number */
    printf("\nEnter any number : ");
	/* scan number and store in variable num */
    scanf(" %d", &num);
	
	/* check i num equal one */
	if (num == 1 )
	{
		/* print Prime Number */
		 printf("this is number is prime"); 	 
		
	}
	/*loop until i greater than num */
	while ( i <= num )    
    { 
	
	/* check num equal i */
    if ( num == i )   
	{	
		/*print "number prime */
		printf("this is number is prime"); 
		/* break loop */
		break;  
	}
	/* check Reminder equal Zero */
    else if (num%i == 0 )  
	{
		/*print "number not prime */
		printf("this is number is not prime") ;
		/* break loop */
		break;
	}
		/* increment i */
		i++;     
   }
   
}    
	