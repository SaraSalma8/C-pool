/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

#include <stdio.h>

int main()
{
    int i, j, N,rows,columns,type;
     printf("If you want to print rhombus mirrored press(1) or parallelog rammirrored press(2):");
     scanf("%d",&type);
switch(type)
{
	case 1:
	    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i=1; i<=rows; i++)
    {
        /* Print trailing spaces */
        for(j=1; j<i; j++)
        {
            printf(" ");
        }

        /* Print hollow rhombus */
        for(j=1; j<=rows; j++)
        {
            if(i==1 || i==rows  || j==1|| j==rows)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }
	   break;
	   
	case 2:
	       printf("Enter rows: ");
    scanf("%d", &columns);
    printf("Enter columns: ");
    scanf("%d", &rows);

    for(i=1; i<=columns; i++)
    {
        /* Print trailing spaces */
        for(j=1; j<i; j++)
        {
            printf(" ");
        }


        /* Print hollow parallelogram */
        for(j=1; j<=rows; j++)
        {
            if(i==1 || i==columns  || j==1|| j==rows)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

	break;
}
    

    return 0;
}