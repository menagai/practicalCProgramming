/****************************************************/
/* Volume of a sphere:				    */
/*   program that calculate the volume of a sphere. */
/* 						    */
/* author: Micael Eiji Nagai			    */
/* 						    */
/* date: 25/01/2015				    */
/* 						    */
/* note: program from the exercise 5-2		    */
/*       from the book Practical C Programming.	    */
/****************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>
float radius;			/* radius of the circle (informed by user)  */
float volume;			/* volume calculated */
char line[10];
const float PI = 3.1415927;	/* value of PI */
int main() {
  printf( "Program to calculate the volume of a sphere:\n");
  printf( "Inform the radius of the sphere: ");
  fgets( line, sizeof(line), stdin);
  sscanf( line, "%f", &radius);
  volume = PI*radius*radius*radius*4/3;	/* volume formula */
  printf( "Volume: %f\n", volume);

  return(0);
}

