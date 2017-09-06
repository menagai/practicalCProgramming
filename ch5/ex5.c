/**************************************************************/
/* Hours to minutes Conversion				      */
/*      program that receive the value in hour and return the */
/*      minutes value.					      */
/* 							      */
/* objective: write a progrgam that takes hours and minutes   */
/*       as a input, and then outputs the total number of     */
/*       minutes					      */
/* 							      */
/* author: Micael Eiji Nagai				      */
/* 							      */
/* date: 19/02/2009					      */
/* 							      */
/* note: this program was made as a exercise from the book    */
/*       "Practical C Programm" (Exercise 5 from ch 5)	      */
/* 							      */
/* example: 1 hour 30 minutes = 90 minutes		      */
/**************************************************************/

#include<stdio.h>
#include<string.h>
char line[10];			/* input variable */
int hour;			/* input hour variable */
int min;			/* input minutes variable */
int minout;			/* output minute value  */

int main(){
  printf( "Hour to minute convertion\n");
  printf( "Inform the hour (hours minutes, without :): ");
  
  fgets( line, sizeof(line), stdin); /* get the input */
  sscanf( line, "%d %d", &hour, &min);
  
  minout = 60*hour + min;	/* conversion from hour to minutes formula */
  
  printf( "min: %d \n", minout); /* print the result */
  
  return(0);
}
