// array di stringhe mediante array di puntatori ottenuto con puntatori a puntatori
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

  char **str_array=NULL; // equivalente all'array visto in precedenza ma in questo caso non ho limiti neanche sul numero di stringhe
  // devo inizializzarlo a NULL visto che useremo la realloc()
  int mem_used=sizeof(str_array);

  int i;
  word = strtok(incipit, delimitatori);
  for(i=0; word; ++i) // mi fermo se finisco con strtok ma non prevedo un massimo numero di stringhe
  {
    //  per aggiungere la parola letta all'array prima di tutto devo creare una riga e poi allocare la stessa,
    //  quindi un passaggio in piu' rispetto al precedente
    str_array = realloc(str_array, sizeof(char*) * (i + 1));  // realloc() mi permette di aggiornare il numero di righe. Mi servono i+1 righe visto che qui ho gia' letto i+1 parole
    str_array[i] = malloc(sizeof(char) * (strlen(word) + 1)); // come precedente, alloco spazio necessario in base a quanto devo memorizzare
    strcpy(str_array[i], word); // man mano che ho una parola la ricopio nella posizione giusta nell'array
    mem_used += sizeof(char) * (strlen(word) + 1) + sizeof(char*); // molto piu' flessibile ma leggera penalizzazione in termini di memoria

    word = strtok(NULL, delimitatori);
  }

  for(int j=0; j<i; ++j)
  { 
    printf("#%d \t %s\n", j, str_array[j]);
    free(str_array[j]); // libero memoria visto che non la uso piu'
  }

  printf("Per memorizzare le stringhe ho usato %d byte di memoria\n", mem_used);

  return 0;
}

