/************************************************************/
/* Perimeter of a rectangle				    */
/*   program tht prints the perimeter of a rectangle,	    */
/*   given its height and width. 			    */
/*  							    */
/*   author: Micael Eiji Nagai				    */
/* 							    */
/*   date: 04/02/2015					    */
/* 							    */
/*   Objective: this program was created as a exercise for  */
/*              the book "Practical C program"		    */
/************************************************************/

#include<stdio.h>
#include<string.h>
char line[10];
float wdt;			/* width of the rectangle (informed)*/
float hgt;			/* height of the rectangle (informed)*/
float perimeter;		/* perimeter of the rectangle (calculed) */
int main(){
  printf("Calculate the perimeter of a rectangle\n ");
  printf("Inform the width of the rectangle: ");
  fgets( line,sizeof(line), stdin);
  sscanf(line, "%f", &wdt);
  printf("Inform the height of the rectangle: ");
  fgets( line,sizeof(line), stdin);
  sscanf(line, "%f", &hgt);
  perimeter = 2*(wdt+hgt);
  printf( "Perimeter: %f\n", perimeter);
  return(0);
}

