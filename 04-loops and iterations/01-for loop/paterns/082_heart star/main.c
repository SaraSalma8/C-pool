/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/

#include <stdio.h>
/* main function*/
int main()
{
    int i, j, n; // define integer variables

    printf("Enter value of n : ");//*************to print this sentence to user*******
    scanf("%d", &n);        //******to take value from user And Put it in Variable n
/* for loop*/
/* loop to print space*/
    for(i=n/2; i<=n; i+=2)
    {
        for(j=1; j<n-i; j+=2)
        {
            printf(" ");
        }
/* to print stars**/
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
/*to print spaces*/
        for(j=1; j<=n-i; j++)
        {
            printf(" ");
        }
/* to print stars*/
        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    for(i=n; i>=1; i--)
    {
        for(j=i; j<n; j++)
        {
            printf(" ");
        }

        for(j=1; j<=(i*2)-1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}