// array di stringhe mediante array bidimensionale
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


  // un array bidimensionale puo' essere usato per memorizzare tante stringhe
  // devo:
  // 1. dimensionare quante stringhe devo gestire
  // 2. dimensionare la massima lunghezza che devo gestire per una stringa

  char str_array[100][25];   // con questo array posso memorizzare fino a 100 strimghe di massimo 24 caratteri

  int i;
  word = strtok(incipit, delimitatori);
  for(i=0; word && i<100; ++i) // mi fermo se finisco con strtok o se raggiungo massimo numero di stringhe
  {
    // NUOVO ELEMENTO: nel caso di array bidimensionali se ometto il secondo indice ho l'indirizzo della riga
    strcpy(str_array[i], word); // man mano che ho una parola la ricopio nella posizione giusta nell'array

    word = strtok(NULL, delimitatori);
  }

  for(int j=0; j<i; ++j)
  { 
    printf("#%d \t %s\n", j, str_array[j]);
  }

  printf("Per memorizzare le stringhe ho usato %zd byte di memoria\n", sizeof(str_array));

  return 0;
}

