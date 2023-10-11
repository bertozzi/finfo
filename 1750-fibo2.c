// ricorsione + dynamic programming
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

#define NGRANDE 2000
unsigned long fibonacci(unsigned long n)
{
  static unsigned long Fibos[NGRANDE]={0,1}; // stati rende questa variabile a durata fissa

  if(!n) return 0;
  if(Fibos[n]) return Fibos[n]; // se l'ho gia' calcolato inutile ricalcolarlo!
  Fibos[n] = fibonacci(n-2)+fibonacci(n-1);
  return Fibos[n];
}
