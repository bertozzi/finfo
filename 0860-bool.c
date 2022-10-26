// il tipo di dato _Bool
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char **argv){

  _Bool testaocroce;

  srand(time(0));

  testaocroce = rand()%2;

  if(testaocroce)
    printf("Croce!\n");
  else
    printf("Testa!\n");

  printf("[testaocroce] vale %d e occupa %zd byte\n", testaocroce, sizeof(testaocroce));

  testaocroce = 7; //XXX ??? 

  printf("adesso [testaocroce] vale %d\n", testaocroce);

  return 0;
}

