/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/


/**
 * C program to get the number of trailing zeros 
 */

#include <stdio.h>
#define INT_SIZE sizeof(int) * 8 /* Integer size in bits */

int main()
{
    int num, order, i;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &num);

    /* Initially set the order to max size of integer */
    order = INT_SIZE - 1;
    int Count=0;
    int Old_Count=0;
    /* Iterate through each bit of integer */
    for(i=0; i<INT_SIZE; i++)
    {
        /* If current bit is set */
        if(((num>>i) & 1)==0)
        {
            Count++;
        }
       else if(((num>>i) & 1)==1)
	{
	  if(Count>Old_Count)
	    {
		Old_Count=Count;
		Count=0;
	    }
	}
    }
    if(Count>Old_Count)
      {
	 Old_Count=Count;
	 Count=0;
       }

    printf("the biggest number of zeros in %d is %d", num, Old_Count);

    return 0;
}