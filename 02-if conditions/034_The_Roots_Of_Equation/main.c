/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/


/* Include stdio.h library
   To use printf and scanf function */
#include <stdio.h>
/* Include math.h library
   To use pow function */
   #include<math.h>
/* define the main function */
void main()
{
	/* Define six variables from Float */
	float a = 0 ;
	float b = 0 ;
	float c = 0 ;
	float root1 = 0;
	float root2 = 0;
	float z = 0;
	/*print the Equation*/
	printf("\n ax^2+bx+c = 0");
	
	/* Ask the user to enter value of a */
	printf("\n Please Enter The value of a = ");
	/*Stores the a number in variable a */
	scanf(" %f",&a);
	
	/* Ask the user to enter value of b */
	printf("\n Please Enter The value of b = ");
	/*Stores the b number in variable b */
	scanf(" %f",&b);
	
    /* Ask the user to enter value of c */
	printf("\n Please Enter The value of c = ");
	/*Stores the c number in variable c */
	scanf(" %f",&c);
	
	z = ( (b*b)-(4*a*c) );
	/*Check if a & b equal Zero*/
	if( a == 0 && b == 0)
	{
		/*Print "no solution of this Equation "*/
		printf("\n No Solution of this Equation");
	}
	else if( a == 0)
	{
		/*Performs root1 and stores the result in variable root1*/
		root1= -c/b ;
		/*print "one root" and print root */
		printf("\n One Root ");
		printf("\n Root1 = %f ", root1);
	}
	/*Check if this equation  (2b-4ac) is Negative */
	else if(z < 0)
	{
		/*print No Roots*/
		printf("\n No Roots");
	}
	else
	{
		/*Performs root1 and stores the result in variable root1*/
		root1 = (-b + (pow( z , 0.5 ) )/ (2*a));
		/*Performs root2 and stores the result in variable root2*/
		root2 =  (-b - (pow( z , 0.5 ) )/ (2*a) );
	}
}