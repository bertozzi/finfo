// stringa definizione
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  // tutto cio' che e' tra doppi apici va considerato stringa nel C

  char lamiaprimastringa[] = "stringa"; // definisco array di char e lo inizializzo con stringa

  // qual e' la dimensione di quell'array?

  printf("L'array 'lamiaprimastringa' contiene %ld elementi\n", sizeof(lamiaprimastringa)/sizeof(char));
  printf("Che sono:\n");
  for(int i=0; i<sizeof(lamiaprimastringa)/sizeof(char); ++i)
  {
    printf(" %d: %c (%d)\n", i, lamiaprimastringa[i], lamiaprimastringa[i]);
  }

  return 0;
}

/*
   OUTPUT

L'array 'lamiaprimastringa' contiene 8 elementi
Che sono:
 0: s (115)
 1: t (116)
 2: r (114)
 3: i (105)
 4: n (110)
 5: g (103)
 6: a (97)
 7:  (0)

*/

