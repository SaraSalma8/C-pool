
/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

#include <stdio.h>

int main()
{
    int i, j, rows;
    int stars, spaces;
   
    printf("Enter rows to print : ");
    scanf("%d", &rows);
    
    
    stars = 1;
    spaces = rows - 1;
    
    /* Iterate through rows */
	
    for(i=1; i<rows*2; i++)
    {
        /* Print spaces */
        for(j=1; j<=spaces; j++)
            printf(" ");
        
        /* Print stars */
        for(j=1; j<stars*2; j++)
            printf("*");
        
        /* Move to next line */
        printf("\n");
        
        if(i<rows)
        {
            spaces--;
            stars++;
        }
        else
        {
            spaces++;
            stars--;
        }
    }
    
    return 0;
}



/*numberofspace=(numberofrows-1)-numberofrow
				5-1-4=0

numberofstar=(2*numberofrow)+1
				2*0 + 1=1
				2*1 + 1=3
				2*2 + 1=5
				2*3 + 1=7
				2*4 + 1=9*/
				










