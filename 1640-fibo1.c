// ricorsione inefficiente (numeri di Fibonacci)
#include<stdio.h>
#include<stdlib.h>


unsigned long fibonacci(unsigned long n);

int main(int argc, char **argv){
  unsigned int n;

  printf("Inserisci l'indice del numero di Fibonacci da calcolare: ");
  scanf("%u", &n);

  printf("Il numero di Fibonacci di indice %u vale %lu\n", n, fibonacci(n));


  return 0;
}

unsigned long fibonacci(unsigned long n)
{
  if(n==0) return 0;
  if(n==1) return 1;
  return fibonacci(n-2)+fibonacci(n-1);
}
