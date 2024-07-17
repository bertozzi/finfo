// errore, la condizione d'uscita non e' detto si verifichi
#include<stdio.h>
#include<stdlib.h>

double harmonic(unsigned int n) {
    if (n == 1) return 1.0;
    return harmonic(n) + 1.0/n; //FIXME dovevo invocare harmonic(n-1)
}

int main(int argc, char **argv){

  unsigned int x;
  printf("Inserisci il numero di cui vuoi calcolare l'armonica: ");
  scanf("%u", &x);

  printf("harmonic(%d) restituisce %f\n", x, harmonic(x));

  return 0;
}

