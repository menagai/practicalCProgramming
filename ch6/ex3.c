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
/*    Given a numeric grade, print the letter with + or - after the */
/*    letter, based on the last digit of the score       	    */
/*    1-3 (-); 4-7 (blank); 8-0 (+)
/* 								    */
/* author: Micael Eiji Nagai					    */
/* 								    */
/* date: 20/02/2015						    */
/* 								    */
/* notes: This program was created as a exercise from the book	    */
/*    "Practical C Programming" - exercise 3 - chapter 6	    */
/********************************************************************/

#include <stdio.h>
char  line[80];         /* input line */
int   ngrade;		/* numeric grade */
int last;		/* last digit of the grade */
char cgrade;		/* complement of the grade based on the last digit */

int main()
{
    printf("Enter numeric grade:");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &ngrade);
    
    last = ngrade % 10;

    if( last >= 1 & last <= 3 ){
      cgrade = '-';
    }else{
      if( last <=7 & last >= 4 ){
	cgrade = ' ';
      } else{
	cgrade = '+';
      }
    }
	
    if( ngrade < 61){
      printf("Your grade is F (%d).\n", ngrade);
    } else{
      if( ngrade <71){
	printf( "Your grade is D%c (%d).\n",cgrade, ngrade);
      } else {
	if( ngrade < 81){
	  printf( "Your grade is C%c (%d). \n", cgrade,ngrade);
	} else {
	  if( ngrade < 91){
	    printf( "Your grade is B%c (%d). \n", cgrade,ngrade);
	  } else {
	    if( ngrade <= 100){
	      printf( "Your grade is A%c (%d). \n", cgrade,ngrade);
	    } else {
	      printf("Grade not available.\n");
	    }
	  }
	}
      }
    }

    return (0);
}
