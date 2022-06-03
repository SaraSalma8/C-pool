/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

#include <stdio.h>

int main()
{
    int i, j, N,rows,columns,type;
     printf("If you want to print rhombus mirrored hollow right triangle  press (1) or hollow mirrored right triangle press(2):");
     scanf("%d",&type);
switch(type)
{
	case 1:
	     printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=i; j++)
        { 
            /* 
             * Print star for first column(j==1), 
             * last column(j==i) or last row(i==rows).
             */
            if(j==1 || j==i || i==rows)
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
	   
	case 2:
	        printf("Enter number of rows : ");
    scanf("%d", &rows);

    /* Iterate through rows */
    for(i=1; i<=rows; i++)
    {
        /* Print trailing spaces */
        for(j=i; j<rows; j++)
        {
            printf(" ");
        }

        /* Print hollow right triangle */
        for(j=1; j<=i; j++)
        {
            /*
             * Print star for last row(i==row),
             * first column(j==1) and
             * last column(j==i).
             */
            if(i==rows || j==1 || j==i)
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