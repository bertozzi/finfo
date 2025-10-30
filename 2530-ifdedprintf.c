// bugged code with added fprintf() and conditional compilation with #ifdef
#include <stdio.h>

#define DEBUG // comment this out to remove debug messages or, rather, to fully remove the code for debug messages

int main(int argc, char **argv){

  int sum=0, val, num=0;
  double ave;

  while (scanf("%d\n",&val) == 1) 
  {
    sum += val;
    num++;
#ifdef DEBUG
    fprintf(stderr, "val = %d sum = %d num = %d\n", val, sum, num); // stderr output is not buffered
#endif
  }

#ifdef DEBUG
  fprintf(stderr, "After while() val = %d sum = %d num = %d\n", val, sum, num);
#endif

  if(num > 0) 
  {
    ave = sum/num;
#ifdef DEBUG
    fprintf(stderr, "sum = %d num = %d sum/num = %f\n", sum, num, sum/num); //we have a warning here....
#endif
    printf("Average is %f\n", ave);
  }
}
