// specificatori di formato per numeri interi
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  char a;
  short b;
  int c;
  long d;
  long long e;

  printf("Inserisci 5 numeri: ");
  scanf("%hhd %hd %d %ld %lld", &a, &b, &c, &d, &e);

  printf("Hai inserito %d %d %d %ld %lld\n", a, b, c, d, e); // a rigore non necessario prefisso char e short se decimale

  printf("In formato esadecimale sono: %hhx %hx %x %lx %llx\n", a, b, c, d, e); // qui viceversa cambia se voglio considerare l'esatto numero di byte 
  printf("In formato esadecimale sono: %hhu %hu %u %lu %llu\n", a, b, c, d, e); // qui viceversa cambia se voglio considerare l'esatto numero di byte 

  return 0;
}

