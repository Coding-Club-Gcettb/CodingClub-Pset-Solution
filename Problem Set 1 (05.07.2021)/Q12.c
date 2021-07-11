/*
IF THE LENGTH OF THREE SIDES OF TRIANGLE ARE INPUT THROUGH
THE KEYBOARD.
WRITE A PROGRAM TO FIND THE AREA OF THE TRIANGLE

Sample input: -
enter the three sides of the triangle :
3
6
7
Sample output : -
the perimeter(s) of the Triangle is 8.00
The area of the triangle is 8.94

Contributed by Rajesh Kumar Halder(CSE)
*/

#include <stdio.h>
#include <math.h>

int main()
{
 Float a, b, c, s;
double area;

  printf("Enter sides of a triangle\n");
  scanf("%f%f%f", &a, &b, &c);

  s = (a+b+c)/2; // printf("Semiperimeter=%.2f\n ",s) ;

  area = sqrt(s*(s-a)(s-b)(s-c));

  printf("Area of the triangle = %.2lf\n", area);

  return 0;
}
