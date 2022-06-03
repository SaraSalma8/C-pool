/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/


#include <stdio.h>

int main()
{
    int i, j, N,rows,columns,type;
     printf("If you want to print hollow pyramid star pattern press(1) or inverted  press(2):");
     scanf("%d",&type);
switch(type)
{
	case 1:
	   printf("Enter number of rows : ");
    scanf("%d", &rows);

    for(i=1; i<=rows; i++)
    {
        /* Print trailing spaces */
        for(j=i; j<rows; j++)
        {
            printf(" ");
        }

        /* Print hollow pyramid */
        for(j=1; j<=(2*i-1); j++)
        {
            /*
             * Print star for last row (i==rows),
             * first column(j==1) and for
             * last column (j==(2*i-1)).
             */ 
            if(i==rows || j==1 || j==(2*i-1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        /* Move to next line */
        printf("\n");
    }
	   break;
	   
	case 2:
	       printf("Enter number of rows: ");
    scanf("%d", &rows);

    /* Iterate through rows */
    for(i=1; i<=rows; i++)
    {
        /* Print leading spaces */
        for(j=1; j<i; j++)
        {
            printf(" ");
        }

        /* Print hollow pyramid */
        for(j=1; j<=(rows*2 - (2*i-1)); j++)
        {
            /*
             * Print star for first row(i==1),
             * ith column (j==1) and for
             * last column (rows*2-(2*i-1))
             */ 
            if(i==1 || j==1 || j==(rows*2 - (2*i - 1)))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        /* Move to next line */
        printf("\n");
    }
	break;
}
    

    return 0;
}