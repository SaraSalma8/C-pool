
/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

#include <stdio.h>

int main()
{
    int i, j, N,rows,columns,type;
     printf("If you want print square press(1) or rectangle  press(2): ");
     scanf("%d",&type);
switch(type)
{
	case 1:
	     /* Input number of rows from user */
    printf("Enter number of rows: ");
    scanf("%d", &N);

    /* Iterate over each row */
    for(i=1; i<=N; i++)
    {
        /* Iterate over each column */
        for(j=1; j<=N; j++)
        {
            if(i==1 || i==N || j==1 || j==N)
            {
                /* Print star for 1st, Nth row and column */
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        /* Move to the next line/row */
        printf("\n");
    }
	   break;
	   
	case 2:
	     printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &columns);

    /* Iterate over each row */
    for(i=1; i<=rows; i++)
    {
        /* Iterate over each column */
        for(j=1; j<=columns; j++)
        {
            if(i==1 || i==rows || j==1 || j==columns)
            {
                /* Print star for 1st and last row, column */
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        /* Move to the next line */
        printf("\n");
    }
	break;
}
    

    return 0;
}