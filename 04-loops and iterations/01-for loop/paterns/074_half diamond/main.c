/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

#include <stdio.h>

int main()
{
    int i, j, N,rows,columns,type,spaces,star;
     printf("If you want to print half diamond star pattern press (1) or mirrored half diamond star patternpress(2): ");
     scanf("%d",&type);
switch(type)
{
	case 1:
	   printf("Enter number of columns:");
    scanf("%d",&N);

    columns=1;

    for(i=1;i<N*2;i++)
    {
        for(j=1; j<=columns; j++)
        {
            printf("*");
        }

        if(i < N)
        {
            /* Increment number of columns per row for upper part */
            columns++;
        }
        else
        {
            /* Decrement number of columns per row for lower part */
            columns--;
        }

        /* Move to next line */
        printf("\n");
    }

	   break;
	   
	case 2:
	        printf("Enter number of columns : ");
    scanf("%d", &N);

    
    spaces = N-1;
    star = 1;
    
    /* Iterate through rows */
    for(i=1; i<N*2; i++)
    {
        /* Print leading spaces */
        for(j=1; j<=spaces; j++)
            printf(" ");
        
        /* Print stars */
        for(j=1; j<=star; j++)
            printf("*");
        
        /* Move to next line */
        printf("\n");
        
        if(i < N) 
        {
            star++;
            spaces--;
        }
        else
        {
            star--;
            spaces++;
        }
    }
	break;
}
    

    return 0;
}