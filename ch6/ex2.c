/********************************************************************/
/* Grade values							    */
/*   this program receive the % right and gives a grade value	    */
/* 								    */
/* objective: A professor generates letter grades using this table: */
/* 								    */
/*    % Right |  Grade						    */
/*    -----------------						    */
/*    0-60    |  F						    */
/*    61-70   |  D						    */
/*    71-80   |  C						    */
/*    81-90   |  B						    */
/*    91-100  |  A						    */
/*    								    */
/*    Given a numeric grade, print the letter			    */
/* 								    */
/* author: Micael Eiji Nagai					    */
/* 								    */
/* date: 20/02/2015						    */
/* 								    */
/* notes: This program was created as a exercise from the book	    */
/*    "Practical C Programming" - exercise 2 - chapter 6	    */
/********************************************************************/

#include <stdio.h>
char  line[80];         /* input line */
int   ngrade;		/* numeric grade */

int main()
{
    printf("Enter numeric grade:");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &ngrade);
    
    if( ngrade < 61){
      printf("Your grade is F (%d).\n", ngrade);
    } else{
      if( ngrade <71){
	printf( "Your grade is D (%d).\n", ngrade);
      } else {
	if( ngrade < 81){
	  printf( "Your grade is C (%d). \n", ngrade);
	} else {
	  if( ngrade < 91){
	    printf( "Your grade is B (%d). \n", ngrade);
	  } else {
	    if( ngrade <= 100){
	      printf( "Your grade is A (%d). \n", ngrade);
	    } else {
	      printf("Grade not available.\n");
	    }
	  }
	}
      }
    }

    return (0);
}
