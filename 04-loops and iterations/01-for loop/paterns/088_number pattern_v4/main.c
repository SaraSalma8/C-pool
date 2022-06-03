/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

#include <stdio.h>
/* main function*/
int main()
{
    int num; //*******Define integer Variable********

    printf("Enter any number: "); // to print This Sentence to user
    scanf("%d", &num);            //to Take Value From User And Put it In Variable num***************

    while(num != 0) /*to Check About Variable num if not Equal 0**************/
    {
        printf("%d\n", num); // to print value of num 
        num = num / 10; //************to put the Result of operation in variable num************
    }

    return 0;
}