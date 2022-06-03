/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/



/* Include stdio.h library
   To use printf and scanf function */
#include <stdio.h>
/* Include math.h library
   To use pow function */
   #include<math.h>
/* define the main function */
void main()
{
  /* v is wind speed in mph, t is temperature in Fahrenheit
   and wci is wind chill index*/
  /*Define three variables float */
   float v = 0;    /* to store wind speed in mph enterd by user */
   float t = 0;    /* to store temperature in Fahrenheit by user */
   float wci = 0;  /* to store calculated wind chill index */
   
  
   /*Ask user to enter wind speed in mph*/
     printf("\nEnter wind speed in mph : ");
   /*scan number and store in variable v */
    scanf(" %f", &v);
	
   /*Ask user to enter temperature in Fahrenheit*/
     printf("\nEnter temperature in Fahrenheit: ");
   /*scan number and store in variable t */
    scanf(" %f", &t);

    /* Check if v in range from 0 to 4 */
    if((v >= 0) && (v <= 4))
	{
		/* Calculate this Operation and put the Result in variable wci */
		wci = t;
	}	
    /* check if v greater than 45 */
	else if (v >= 45)
	{
		/* Calculate this Operation and put the Result in variable wci */
		wci = ((1.6*t) - 55);
	}
	/* otherwise */
    else
	{
		/* Calculate this Operation and put the Result in variable wci */
        wci = 91.4 + ((91.4 - t)*((0.0203*v) - (0.304*(pow(v,0.5))) - 0.474));
	}
   
    /*print wind speed , temperature and Wind Chill Index */
     printf("\nFor wind speed = %.2f and temperature = %.2f\n",v, t);

     printf("Wind Chill Index is: %.2f\n", wci);


}

