/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

#include <stdio.h>

int main()
{
    int i, j, N,rows,columns,type;
     printf("If you want to print hollow inverted right triangle  press (1) or hollow mirrored inverted right triangle press(2): ");
     scanf("%d",&type);
switch(type)
{
	case 1:
	    printf("Enter number of rows: ");
    scanf("%d", &rows);

    /* Iterate through rows */
    for(i=1; i<=rows; i++)
    {
        /* Iterate through columns */
        for(j=i; j<=rows; j++)
        {
            /* 
             * Print stars for first row(i==1), 
             * first column(j==1) and 
             * last column(j=rows).
             */
            if(i==1 || j==i || j==rows)
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
	      printf("Enter number of rows : ");
    scanf("%d", &rows);

    for(i=1; i<=rows; i++)
    {
        /* Print leading spaces */
        for(j=1; j<i; j++)
        {
            printf(" ");
        }

        /* Print hollow inverted right triangle */
        for(j=i; j<=rows; j++)
        {
            /*
             * Print star for ith column(j==i),
             * last column(j==rows) and for
             * first row(i==1).
             */ 
            if(j==i || j==rows || i==1)
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

	break;
}
    

    return 0;
}