/*********************************************************/
/* Conversion from km/h to mph				 */
/*    program that convert a given number from kilometer */
/*    per hour to miles per hour			 */
/* 							 */
/* author: Micael Eiji Nagai				 */
/* 							 */
/* date: 19/02/2015					 */
/* 							 */
/* objective: this program was made as an exercise	 */
/*     for the book "Practical C Programming" 		 */
/*     (Exercise 4 from chapter 5)			 */
/*********************************************************/

#include<stdio.h>
#include<string.h>

char line[10];			/* input var */
float mph;			/* miles variable */
float kmh;			/* kilometer variable */
const float factor = 0.6213712;	/* conversion factor from km/h to mph */
int main(){
  printf( "Conversion Program (km/h to mph)\n");
  printf( "km/h: ");

  fgets(line, sizeof(line), stdin); /* get the km/h value */
  sscanf( line, "%f", &kmh);

  mph = kmh * factor;		/* conversion formula */
  printf( "mph: %f\n", mph);	/* print the result */

  return(0);
}
