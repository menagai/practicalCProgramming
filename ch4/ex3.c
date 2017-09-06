/***********************************************************************/
/* Rectangle area and perimeter					       */
/*    program that calculate the area and the perimeter of a rectangle */
/*    with the width = 3 inches and the height = 5 inches.	       */
/* 								       */
/*   author: Micael Eiji Nagai.					       */
/* 								       */
/*   date: 22/01/2015 						       */
/* 								       */
/*   purpose: exercise 4-3 from the book Practical C programming       */
/***********************************************************************/

#include <stdio.h>

float width;			/* the width of the rectangle */
float height;			/* the height of the rectangle */
float area;			/* the result of the area of the rectangle*/
float perimeter;		/* the result of the perimeter of the rectangle */
int main()
{
  width = 6.8;
  height = 2.3;
  area = width * height;
  perimeter = 2*(width + height);
  printf( "The rectangle with: \n width = %f inches \n height =  %f inches \n has a area = %f inches \n perimeter = %f inches\n", width, height, area, perimeter);
  return(0);
}
