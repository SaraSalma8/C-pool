/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

#include <stdio.h>

int main()
{
    int i, j, N,rows,columns,type;
     printf("If you want to print rhombus (1) or parallelogram press(2):");
     scanf("%d",&type);
switch(type)
{
	case 1:
	    printf("Enter rows: ");
    scanf("%d", &rows);

    for(i=1; i<=rows; i++)
    {
        /* Print trailing spaces */
        for(j=1; j<=rows - i; j++)
        {
            printf(" ");
        }

        /* Print stars after spaces */
        for(j=1; j<=rows; j++)
        {
            printf("*");
        }

        /* Move to the next line */
        printf("\n");
    }

	   break;
	   
	case 2:
	     printf("Enter rows: ");
    scanf("%d", &rows);
    printf("Enter columns: ");
    scanf("%d", &columns);

    /* Iterate through each row */
    for(i=1; i<=rows; i++)
    {
        /* Print trailing spaces */
        for(j=1; j<=rows - i; j++)
        {
            printf(" ");
        }

        /* Print stars after spaces */
        for(j=1; j<=columns; j++)
        {
            printf("*");
        }

        /* Move to the next line */
        printf("\n");
    }

	break;
}
    

    return 0;
}