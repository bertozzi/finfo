// ricorsione, cosa fa questo programma?
#include<stdio.h>
#include<stdlib.h>

void mystery(int a)
{
  if(a)
  {
    mystery(a/2);
    printf("%d", a%2);
  }
}


int main(int argc, char **argv){

  printf(" 32: ");
  mystery(32);
  printf("\n");

  printf("255: ");
  mystery(255);
  printf("\n");

  printf(" 15: ");
  mystery(15);
  printf("\n");

  return 0;
}

