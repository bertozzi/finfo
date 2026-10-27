// predefined function abs()
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  double a, b;
  printf("Please enter two numbers: ");
  scanf("%lg%lg", &a, &b);

  printf("The absolute difference between %g and %g is %g\n", a, b, abs(a-b)); // why we have a compile warning?
  return 0;
}

