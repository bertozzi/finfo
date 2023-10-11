// if()-else e cortocircuito espressione

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){
  int n, d;

  printf("Introduci due interi positivi: ");
  scanf("%d", &n);
  scanf("%d", &d);

  if (d > 0 && n%d == 0)
    printf("%d e' divisore esatto di %d\n", d, n);
  else
    printf("%d non e' divisore di %d\n", d, n);



  return 0;
}

