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
	/* define two variables intger*/
    int counter = 0; /* to count */
	int	sum = 0;     /* to store sum nubers from 1 to 10 */

	/* print "The first 10 natural numbers are" */
    printf("The first 10 natural number is :\n");

	/*loop to print sum of numbers from 1 to 10 */
    for (counter = 1 ; counter <= 10 ; counter++)
    {
		/* calculate the sum of number */
        sum = sum + counter;
		/* print numbers */
        printf("%d ",counter);    
    }
    /* print the sum */
    printf("\nThe Sum is : %d\n", sum);
}