/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

/* Include stdio.h library
   To use printf and scanf function */
#include<stdio.h>
/* define the main function */
void main()
{
	/* Define five variable from int to store numbers enterd by user*/
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int num4 = 0;
	int num5 = 0;
	
	
    /* Ask user to enter first number */
    printf("\n Please Enter First Number = ");
    /* Scan number and stores it in variable num1 */
    scanf(" %d",&num1);
	
    /* Ask user to enter Second number */
    printf("\n Please Enter Second Number = ");
    /* Scan number and stores it in variable num2 */
    scanf(" %d",&num2);	
	
	/* Ask user to enter third number */
    printf("\n Please Enter Third Number = ");
    /* Scan number and stores it in variable num3 */
    scanf(" %d",&num3);
	
	 /* Ask user to enter fourth number */
    printf("\n Please Enter Fourth Number = ");
    /* Scan number and stores it in variable num4 */
    scanf(" %d",&num4);
	
	/* Ask user to enter fifth number */
    printf("\n Please Enter Fifth Number = ");
    /* Scan number and stores it in variable num5 */
    scanf(" %d",&num5);
	
    printf("\nthe numbers that is divisable by 3 is :");  

    /* check  num1 is divisable by 3*/
    if(num1 % 3 == 0)
	{
		/*print num1*/
		printf("\n %d is divisable by 3 ", num1);
	}
	 /* check  num2 is divisable by 3*/
    if(num2 % 3 == 0)
	{
		/*print num2*/
		printf("\n %d is divisable by 3 ", num2);
	}
	 /* check  num3 is divisable by 3*/
    if(num3 % 3 == 0)
	{
		/*print num3*/
		printf("\n %d is divisable by 3 ", num3);
	}
	 /* check  num4 is divisable by 3*/
    if(num4 % 3 == 0)
	{
		/*print num4*/
		printf("\n %d is divisable by 3 ", num4);
	}
	 /* check  num5 is divisable by 3*/
    if(num5 % 3 == 0)
	{
		/*print num5*/
		printf("\n %d is divisable by 3 ", num5);
	}

}
	
	