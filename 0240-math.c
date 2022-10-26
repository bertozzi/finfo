// esempi funzioni matematiche
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char **argv){

  int x, y;

  printf("Inserisci due numeri interi positivi: ");

  scanf("%d%d", &x, &y);

  printf("Hai inserito %d e %d\n", x, y);

  printf("La radice quadrata di %d e' %f\n", x, sqrt(x));
  printf("Il coseno di %d e' %f\n", y, cos(y));
  printf("%d elevato a %d, vale %f\n", x, y, pow(x,y)); 



  return 0;
}

