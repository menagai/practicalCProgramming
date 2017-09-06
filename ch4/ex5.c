/*************************************************************/
/* Dumb programm					     */
/*    programm that makes the mistakes:			     */
/*      * prints a floatin-point number using %d	     */
/*      * prints a integer usint the %f			     */
/*      * prints a character using the %d		     */
/* 							     */
/* author: Micael Eiji Nagai				     */
/* 							     */
/* date: 22/01/2015					     */
/* 							     */
/* notes: exercise 4-5 from the book practical C programming */
/*************************************************************/

#include <stdio.h>

float varfloat;			/* float variable */
int varint;			/* integer variable */
char varchar;			/* character variable */

int main(){
  varfloat = 3.1415;
  varint = 666;
  varchar = 'M';
  printf("Writing the wrong: \n float variable %d \n integer variable %f \n character variable %d \n", varfloat, varint, varchar);
  return(0);
}
