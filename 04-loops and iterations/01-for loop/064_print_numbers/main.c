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
    int rows = 0;     /*to store rows entered by user*/
	int cols = 0 ;    /*to store clos entered by user*/
	int counter1 = 0; /*using in big for loop*/
	int counter2 = 0; /*using in small for loop*/
	int number = 1;        /*to Display numbers*/

    /*Ask user to Enter number of rows*/
    printf("Enter number of rows: ");
	/*Scan number and store in variable rows */
    scanf(" %d",&rows);
	/*Ask user to Enter number of cols*/
    printf("Enter number of columns: ");
	/*Scan number and store in variable cols */
    scanf(" %d",&cols);

     /* loop to print rows*/
    for(counter1 = 1 ; counter1 <= rows; counter1++)
    {
        /* loop to print columns*/
        for(counter2 = 1 ; counter2 <= cols ; counter2++)
        {
			/*print number*/
            printf("%-3d",number);
			/*Increment k*/
			number++;
        }
		/*print New Line */
        printf("\n");
    }

}