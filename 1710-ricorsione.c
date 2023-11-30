// la ricorsione: esempio fattoriale
#include<stdio.h>
#include<stdlib.h>


unsigned long long fact(unsigned int n){

  printf("DEBUG: sono stata invocata con n=%u\n", n);

  if(n==1 || n==0)
  {
    printf("DEBUG: restituisco 1\n");
    return 1;   // condizione di uscita
  }

  unsigned long long risultato = n*fact(n-1);
  printf("DEBUG: restituisco %llu\n", risultato);

  return risultato;
}

int main(int argc, char **argv){

  unsigned int x;

  printf("Inserisci un numero intero: ");
  scanf("%u", &x);

  printf("%u! vale %llu\n", x, fact(x));


  return 0;
}

