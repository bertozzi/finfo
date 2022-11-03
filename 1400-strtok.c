// strtok()
#include<stdio.h>
#include<stdlib.h>

#include<string.h>

int main(int argc, char **argv){

  // stringa da "spezzettare", uso i backslash per indicare che la riga successiva e' comunque parte della stringa
  char incipit[] = 
"Nel mezzo del cammin di nostra vita   \
mi ritrovai per una selva oscura:      \
che la diritta via era smarrita.       \
E quanto a dir qual era e cosa dura    \
esta selva selvaggia et aspra e forte, \
che nel pensier rinova la paura!";

  // stringa che contiene i possibili delimitatori, notare che ce ne sono anche di piu' rispetto a quelli necessari
  char delimitatori[]= " :.,;'!+-";

  // puntatore che puntera' alle varie sottostringhe man mano individuate
  char *word;


  printf("La stringa da spezzettare e':\n%s\ne si trova all'indirizzo %p\nI suoi elementi sono:\n", incipit, incipit);

  int i=0;
  word = strtok(incipit, delimitatori);
  while(word)
  {
    printf("#%d: \t %15s \t %p \n", i,  word, word);
    ++i;
    word = strtok(NULL, delimitatori);
  }

  // la strtok() ha pero' effetti collaterali di cui tener conto!
  printf("Al termine delle operazioni se stampo incipit ottengo: %s\n", incipit);
  // cosa e' successo? Perche' questo comportamento?

  // stampo carattere per carattere per capire come la strtok ha modificato la stringa originale
  for(int i=0; i<sizeof(incipit); ++i)
  {
    if(incipit[i] >= ' ')
      printf("%c", incipit[i]);
    else
      printf("[%d]", incipit[i]);
  }
  printf("\n");

  return 0;
}

