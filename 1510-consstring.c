// stringa definizione
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  // tutto cio' che e' tra doppi apici va considerato stringa nel C

  char lamiaprimastringa[] = "la mia prima stringa"; // definisco array di char e lo inizializzo con stringa

  // qual e' la dimensione di quell'array?

  printf("L'array 'lamiaprimastringa' contiene %ld elementi\n", sizeof(lamiaprimastringa)/sizeof(char));
  printf("Che sono:\n");
  for(int i = 0; i < sizeof(lamiaprimastringa)/sizeof(char); ++i)
  {
    printf(" %d: %c (%d)\n", i, lamiaprimastringa[i], lamiaprimastringa[i]);
  }

  return 0;
}

/*
   OUTPUT

   L'array 'lamiaprimastringa' contiene 21 elementi
Che sono:
 0: l (108)
 1: a (97)
 2:   (32)
 3: m (109)
 4: i (105)
 5: a (97)
 6:   (32)
 7: p (112)
 8: r (114)
 9: i (105)
 10: m (109)
 11: a (97)
 12:   (32)
 13: s (115)
 14: t (116)
 15: r (114)
 16: i (105)
 17: n (110)
 18: g (103)
 19: a (97)
 20:  (0)


*/

