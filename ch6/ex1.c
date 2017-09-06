/**************************************************************/
/* Distance between two points				      */
/*    This program give the square of the distance 	      */
/*    between two points located at a 2D latice 	      */
/* 							      */
/* objective: write a program to find the square of 	      */
/*    the distance between two points. (For more advanced     */
/*    problem, find the actual distance).		      */
/* 							      */
/* input: the initial and final x and y given by the	      */
/*    user						      */
/* 							      */
/* output: the square and real distance between the points    */
/* 							      */
/* author: Micael Eiji Nagai				      */
/* 							      */
/* date: 20/02/2015					      */
/* 							      */
/* notes: this program was created as a exercise for the book */
/*    "Practical C Programming" (ex. 1 ch 6).		      */
/*                                                            */
/* compilation: gcc -o ex1.c ex1.c -lm                        */
/*                                                            */
/* example:                 |      *(p2)                      */
/*    p1 = (1,1)            |                                 */
/*    p2 = (3,5)            |                                 */
/*    dist^2 = 20           |  *(p1)                          */
/*    dist = 4.472136       |________________                 */
/**************************************************************/

#include<stdio.h>
#include<string.h>
#include<math.h>

char line[20];			/* input var */
int xi;				/* initial value of x */
int yi;				/* initial value of y */
int xf;				/* final value of x */
int yf;				/* final value of y */
int sdist;			/* square of the distance between the two points */
float dist;			/* distance between the two points */

int main(){
  printf( "Distance between points\n" );
  printf( "Inform the x y value of first point: " );
  fgets( line, sizeof(line),stdin ); /* take the x and y value of first point */
  sscanf( line, "%d %d", &xi, &yi );
  
  printf( "Inform the x y value of second point: ");
  fgets( line, sizeof(line), stdin ); /* take the x and y value of second point */
  sscanf( line, "%d %d", &xf, &yf );

  // Pythagora's theorem
  sdist = (xf - xi) * (xf - xi) + ( yf-yi) * (yf-yi); /* square of the distance*/
  dist = sqrt( sdist );				      /* distance from  the two points */

  printf( "Square of the distance = %d \n", sdist ); /* print the square of the distance */
  printf( "Distance = %f \n", dist );		     /* print the distance */

  return(0);
}
