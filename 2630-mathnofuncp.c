// example of selection of a function without func pointers: a switch-case or multiple if() are required
#include<stdio.h>
#include<stdlib.h>

float sum(float a, float b)
{
  return a + b;
}

float sub(float a, float b)
{
  return a - b;
}

float mult(float a, float b)
{
  return a * b;
}

float divi(float a, float b)
{
  return a / b;
}




int main(int argc, char **argv){

  float op1, op2;
  printf("Enter two numbers: ");
  scanf("%f%f", &op1, &op2);

  int oper;
  printf("Enter your choiche (0 = sum, 1 = sub, 2 = mult, 3 = div): ");
  scanf("%d", &oper);

  float res;
  switch(oper)
  {
    case 0:
      res = sum(op1, op2);
      break;
    case 1:
      res = sub(op1, op2);
      break;
    case 2:
      res = mult(op1, op2);
      break;
    case 3:
      res = divi(op1, op2);
      break;
  }

  printf("The result is %g\n", res);



  return 0;
}

