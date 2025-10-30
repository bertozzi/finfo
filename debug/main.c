// bugged code
#include <stdio.h>
int main(int argc, char **argv){
  int sum=0, val, num=0;
  double ave;

  while (scanf("%d\n",&val) == 1) {
    sum += val;
    num++;
  }

  if(num > 0) {
    ave = sum/num;
    printf("Average is %f\n", ave);
  }

}

