// principali operatori aritmetici
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  int a, b;
  printf("Introdurre due numeri interi:\n");

  printf("Primo numero: ");
  scanf("%d", &a);

  printf("Secondo numero: ");
  scanf("%d", &b);

  printf("%d+%d vale %d\n", a, b, a+b);
  printf("%d-%d vale %d\n", a, b, a-b);
  printf("%d*%d vale %d\n", a, b, a*b);
  printf("%d/%d vale %d\n", a, b, a/b);
  printf("%d%%%d vale %d\n", a, b, a%b); // per stampare '%' devo usare sequenza di escape "%%"


  return 0;
}



