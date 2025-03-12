// bugged code with added printf()
#include <stdio.h>

int main(int argc, char **argv){

  int sum=0, val, num=0;
  double ave;

  while (scanf("%d\n",&val) == 1) 
  {
    sum += val;
    num++;
    printf("val = %d sum = %d num = %d\n", val, sum, num);
  }
  printf("After while() val = %d sum = %d num = %d\n", val, sum, num);

  if(num > 0) 
  {
    ave = sum/num;
    printf("sum = %d num = %d sum/num = %f\n", sum, num, sum/num); //we have a warning here....
    printf("Average is %f\n", ave);
  }
}
