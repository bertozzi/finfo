// dangling else

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){
  int n, d;

  printf("Introduci due interi positivi: ");
  scanf("%d", &n);
  scanf("%d", &d);

  if (d > 0)
  {
    if(n%d)
      printf("%d e' divisore esatto di %d\n", d, n);
  else
    printf("Hai inserito un numero non positivo!\n");
  } // resta mal indentato ma ora si capisce come viene di fatto eseguito 



  return 0;
}

