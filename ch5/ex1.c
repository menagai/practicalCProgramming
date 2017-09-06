/******************************************************/
/* Centigrade to Fahrenheit convert		      */
/*    as the name of the program imply, this 	      */
/*    will convert the centigrade to fahrenheit	      */
/* 						      */
/*   author: Micael Eiji Nagai			      */
/* 						      */
/*   date: 25/01/2015				      */
/* 						      */
/*   note: this program is the exercise 5-1 from the  */
/*         book Practical C Programming.	      */
/******************************************************/

#include <stdio.h>
/* #include <string.h> */
char line[100];
float centigrade;
float fahrenheit;

int main(){
  printf("Centigrade value: ");
  fgets(line, sizeof(line), stdin);
  sscanf( line, "%f", &centigrade);
  fahrenheit = 32+ centigrade*9/5;
  printf( "Fahrenheit value: %f\n", fahrenheit);
   
  return(0);
}
