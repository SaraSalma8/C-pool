/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/


#include <stdio.h>
 /*main function*/
int main()
{
  int n, i,  c, a = 1;  //define integer variables
 
  printf("Enter the number of rows of Floyd's triangle to print\n");
  scanf("%d", &n); /* take value of rows
                       and put it in variable n*/
	/* for loop to print spaces*/				   
  for (i = 1; i <= n; i++)
  {
	  /*for loop to print numbers*/
    for (c = 1; c <= i; c++)
    {
      printf("%d ",a); // to print value of a
      a++; /* to increment variable by 1*/
    }
    printf("\n");
  }
 
  return 0;
}