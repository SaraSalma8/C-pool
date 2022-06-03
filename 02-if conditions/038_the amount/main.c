
/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/


/**
 * C program to count minimum number of notes in an amount
 */
/* Include stdio.h library
   To use printf and scanf function */
#include <stdio.h>
/* define the main function */
void main()
{
	/* define nine variable from int */
    int amount  = 0;
    int note500 = 0;
	int note100 = 0;
	int note50  = 0;
    int note20  = 0;
	int note10  = 0;
	int note5   = 0;
	int note2   = 0;
	int note1   = 0;
   
    /* Ask user to Enter amount*/
    printf("Enter amount: ");
	/* scan number and stores it in variables amount */
    scanf(" %d", &amount);

    /*check amount greater than 500 */
    if(amount >= 500)
    {
		/*calculate note500*/
        note500 = amount/500;
		/*calculate new amount */
        amount -= note500 * 500;
    }
	/*check amount greater than 100 */
    if(amount >= 100)
    {
		/*calculate note100*/
        note100 = amount/100;
		/*calculate new amount */
        amount -= note100 * 100;
    }
	/*check amount greater than 50 */
    if(amount >= 50)
    {
		/*calculate note100*/
        note50 = amount/50;
		/*calculate new amount */
        amount -= note50 * 50;
    }
	/*check amount greater than 20 */
    if(amount >= 20)
    {
		/*calculate note20*/
        note20 = amount/20;
		/*calculate new amount */
        amount -= note20 * 20;
    }
	/*check amount greater than 10 */
    if(amount >= 10)
    {
		/*calculate note10*/
        note10 = amount/10;
		/*calculate new amount */
        amount -= note10 * 10;
    }
	/*check amount greater than 5 */
    if(amount >= 5)
    {
		/*calculate note5*/
        note5 = amount/5;
		/*calculate new amount */
        amount -= note5 * 5;
    }
	/*check amount greater than 2 */
    if(amount >= 2)
    {
		/*calculate note2*/
        note2 = amount /2;
		/*calculate new amount */
        amount -= note2 * 2;
    }
	/*check amount greater than 1 */
    if(amount >= 1)
    {
		/*calculate note1*/
        note1 = amount;
    }

    /* Print required notes */
    printf("Total number of notes = \n");
    printf("500 = %d\n", note500);
    printf("100 = %d\n", note100);
    printf("50 = %d\n", note50);
    printf("20 = %d\n", note20);
    printf("10 = %d\n", note10);
    printf("5 = %d\n", note5);
    printf("2 = %d\n", note2);
    printf("1 = %d\n", note1);

}