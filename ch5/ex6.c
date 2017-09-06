/***********************************************************************/
/* Minutes to hours Conversion					       */
/*     program that takes the minutes value and output the hours value */
/* 								       */
/* objective: write a program that takes an integer as the number      */
/*      of minutes and outputs the total hours and minutes	       */
/* 								       */
/* note: This program was created as a exercise from the book	       */
/*      "Practical C Programm" (exercise 6 from ch 5)		       */
/* 								       */
/* author: Micael Eiji Nagai					       */
/* 								       */
/* date: 19/02/2015						       */
/* 								       */
/* example: 90 minutes = 1 hour 30 minutes			       */
/***********************************************************************/

#include<stdio.h>
#include<string.h>

char line[10]; 			/* input var */
int min;			/* input minutes var */
int hour;			/* output hour var */
int minout;			/* output minutes var */

int main(){
  printf( "Minutes to hours program\n");
  printf( "Inform the minutes: ");

  fgets( line, sizeof(line), stdin);
  sscanf( line, "%d", &min);

  hour = min / 60 ;		/* return the hour part of the inform minutes */
  minout = min % 60;		/* return the minutes part */

  printf( "%d hour %d minutes\n", hour, minout);

  return(0);
}
