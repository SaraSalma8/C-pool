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
	/* define Two variable intger */
	int num = 0;
	int reverse_num = 0; /* to store reverse number */
	
	/* Ask user to enter number */
    printf("\nEnter any number to find sum of its digit: ");
	/* scan number and store in variable num */
    scanf(" %d", &num);
	
	/* loop until num equal zero */
	while (num!=0 )   
   { 
	/* Calculate this Operation and put the Result in variable reverse_num  */
	reverse_num = reverse_num*10+(num %10);
	/*devision num by 10 */
	num=num/10;     
   } 
   /* print reverse_num */
   printf(" the reverse number=%d",reverse_num);
}    
	