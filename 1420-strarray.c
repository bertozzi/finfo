// array di stringhe mediante array di puntatori
#include<stdio.h>
#include<stdlib.h>

#include<string.h>

int main(int argc, char **argv){

  char incipit[] = 
"Nel mezzo del cammin di nostra vita   \
mi ritrovai per una selva oscura:      \
che la diritta via era smarrita.       \
E quanto a dir qual era e cosa dura    \
esta selva selvaggia et aspra e forte, \
che nel pensier rinova la paura!";
  char delimitatori[]= " :.,;'!+-";
  char *word;


  // un array di puntatori puo' essere usato per memorizzare tante stringhe
  // devo:
  // 1. dimensionare il numero massimo di stringhe da gestire

  char *str_array[100];   // con questo array posso memorizzare fino a 100 stringhe, attenzione che non c'e' limite alla lunghezza di ciascuna stringa (a parte i limiti di memoria) ma devo comunque allocarli
  int mem_used=sizeof(str_array);

  int i;
  word = strtok(incipit, delimitatori);
  for(i=0; word && i<100; ++i) // mi fermo se finisco con strtok o se raggiungo massimo numero di stringhe
  {
    // NUOVO ELEMENTO: nel caso di array bidimensionali se ometto il secondo indice ho l'indirizzo della riga
    str_array[i] = malloc(sizeof(char) * (strlen(word) + 1)); // alloco spazio necessario in base a quanto devo memorizzare
    strcpy(str_array[i], word); // man mano che ho una parola la ricopio nella posizione giusta nell'array
    mem_used += sizeof(char) * (strlen(word) + 1);

    word = strtok(NULL, delimitatori);
  }

  for(int j; j<i; ++j)
  { 
    printf("#%d \t %s\n", j, str_array[j]);
    free(str_array[j]); // libero memoria visto che non la uso piu'
  }

  printf("Per memorizzare le stringhe ho usato %d byte di memoria\n", mem_used);

  return 0;
}

