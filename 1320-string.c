// confronto tra 2 array di char, uno contenente una stringa e uno che non contiene una stringa
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  char ns[]={'A', 'B', 'C', 'D' }; // inizializzo l'array con le lettere ABCD. ns NON contiene una stringa
  char s[]="ABCD";                 // anche qui inizializzo l'array ma con la stringa ABCD

  printf("\nns ha dimensione %ld e quindi contiene %ld elementi:\n", sizeof(ns), sizeof(ns)/sizeof(ns[0]));
  for(int i=0; i<sizeof(ns)/sizeof(ns[0]); ++i)
  {
    printf(" '%c' con codice ASCII %d\n", ns[i], ns[i]);
  }

  printf("\ns ha dimensione %ld e quindi contiene %ld elementi:\n", sizeof(s), sizeof(s)/sizeof(s[0]));
  for(int i=0; i<sizeof(s)/sizeof(s[0]); ++i)
  {
    printf(" '%c' con codice ASCII %d\n", s[i], s[i]);
  }


  printf("\n");

  return 0;
}

