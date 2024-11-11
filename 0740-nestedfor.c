// nested for(;;)
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  int x, y;

  printf("       1    2    3    4    5    6    7    8    9   10\n");
  printf("       ----------------------------------------------\n");

  for(x = 1; x <= 10; x = x + 1)
  {
    printf("%3d", x);

    for(y = 1; y <= 10; y = y + 1)
    {
      printf("%5d", x*y);
    }

    printf("\n");
  }

  printf("       ----------------------------------------------\n");

  return 0;
}

