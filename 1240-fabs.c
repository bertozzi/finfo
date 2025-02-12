// predefined function fabs()
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char **argv){

  double a, b;
  printf("Please enter two numbers: ");
  scanf("%lg%lg", &a, &b);

  printf("The absolute difference between %g and %g is %g\n", a, b, fabs(a-b)); // despite the name is double fabs(double x);
  return 0;
}

