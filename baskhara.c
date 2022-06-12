#include <stdio.h>
#include <math.h>

int main (void)   // f(x)=ax2+bx+c //
{
  int y;
  int x;
  int a;
  int b;
  int c;
  printf("Enter the value of a\n");
  scanf("%i",&a);
  printf("Enter the value of b\n");
  scanf("%i",&b);
  printf("Enter the value of c\n");
  scanf("%i",&c);
  int d = b*b-4*a*c;
  printf("The  value of delta is %i\n", d);
  int bas = (-b+sqrt(d))/(2*a);
  printf("The value of x' is %i\n", bas);
  int bas1 = (-b-sqrt(d))/(2*a);
  printf("The value of x'' is %i\n", bas1);
}
