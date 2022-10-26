// la ricorsione: esempio fattoriale
#include<stdio.h>
#include<stdlib.h>


unsigned long long fact(unsigned long long n){

  if(n==1 || n==0) return 1;   // condizione di uscita

  return n*fact(n-1);
}

int main(int argc, char **argv){

  unsigned int x;

  printf("Inserisci un numero intero: ");
  scanf("%u", &x);

  printf("%u! vale %llu\n", x, fact(x));


  return 0;
}

