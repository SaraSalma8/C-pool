/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

/* Include stdio.h library
   To use printf and scanf function */
#include <stdio.h>

/* define the main function */
void main(void)
{

	/* Define four integers */
	int a = 0;
    int b = 0;
	int c = 0;
	int d = 0;
	/* Define one variable float  */
	float ratio = 0;

	/* Ask the user to enter value 1 */
	printf("Enter integer value one\n");
	/* Scan the value and save it in a */
	scanf("%d", &a);
	/* Ask the user to enter value 2 */
	printf("Enter  integer value two\n");
	/* Scan the value and save it in b */
	scanf("%d", &b);
	/* Ask the user to enter value 3 */
	printf("Enter  integer value three\n");
	/* Scan the value and save it in c */
	scanf("%d", &c);
	/* Ask the user to enter value 4 */
	printf("Enter  integer value four\n");
	/* Scan the value and save it in d */
	scanf("%d",&d);
	/* check the condition  */
	if (c-d != 0)
	{
	/* calculate the ratio and assign it in ratio variable */
	ratio = (float)(a+b)/(float)(c-d);
	/*print the Ratio Result*/
	printf("Ratio = %f\n", ratio);
	}
}