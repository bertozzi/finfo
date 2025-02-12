// stringa come puntatore a char
#include<stdio.h>
#include<stdlib.h>

#include<string.h>

int main(int argc, char **argv){

  char animal_array[] = "cavallo";
  char *animal_punct  = "cane";

  // con le righe precedenti creo due array MA in realta' ci sono differenze
  // nel caso di animale[] inizializzo un array con quel contenuto. 
  // nel caso di *pesce inizializzo un array con l'indirizzo in memoria di dove si trova la stringa costante "tonno"

  printf("animal_array = [%s]\n", animal_array);
  printf("animal_punct = [%s]\n", animal_punct);

  animal_punct = "gatto";  // cambio l'indirizzo a cui punta l'array 'animal_punct'
  printf("animal_punct = [%s]\n", animal_punct);

  //animal_array = "zebra"; // errore di compilazione!
  // error: assignment to expression with array type

  // E quindi, come cambio la stringa contenuta in animal_array[] in maniera semplice?

  animal_punct[0] = 'r'; // errore di esecuzione!
  // a cosa e' dovuto?


  return 0;
}

