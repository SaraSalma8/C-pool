/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/


#include <stdio.h>
/* main fuction*/
int main()
{
    int i, j, N;//*******define integer variables******
    int count;   //*******define integer variable******

    printf("Enter N: ");//*******************to print this sentence to user***************
    scanf("%d", &N);//****************to take value from user and put it in variable n***************

    count = N * 2 - 1; //to put the result of operation in variable count 
/* for loop*/
    for(i=1; i<=count; i++) // make loop on variable i
    {
        for(j=1; j<=count; j++) // make loop on variable j
        {
            if(j==i || (j==count - i + 1)) t// to check if one of condition is exquet wil be exquet the next order 
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}