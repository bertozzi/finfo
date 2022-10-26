// funzione realloc()

// voglio memorizzare caratteri inseriti da tastiera
// MA non ne so a priori il numero, lo capiro' solo quando incontro il carattere di invio
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){


  printf("Inserisci una frase:\n"); 

  char c;             // lo uso per leggere i caratteri
  char *frase = NULL; // array di char che conterra' la frase
  int fraselen = 0;   // lunghezza della frase, man mano leggo la incremento
  int i = 0;          // indice che mi servira' per tener traccia dell'ultimo elemento letto XXX lo uso per semplicita' in realta' bastava fraselen

  do
  {
    scanf("%c", &c); // leggo un carattere

    ++fraselen;      // aggiorno lunghezza di quanto letto

    frase = realloc(frase, sizeof(char) * fraselen); // allargo (o nel caso della prima volta lo creo) il buffer che serve a contenere quanto letto
    // FIXME qui ci vorrebbe un controllo, omettiamo per semplicita'

    frase[i]=c; // memorizzo in array il carattere letto
    ++i;        // aggiorno indice 


  }while(c != '\n'); // esco quando incontro l'invio (che comunque ho memorizzato lo stesso)


  printf("I caratteri letti sono: ");
  for(int i=0; i< fraselen; ++i)
    printf("[%c]", frase[i]);
  printf("\n");

  free(frase);

  return 0;
}

// SPOILER: la lettura di sequenze di caratteri da tastiera e' in realta' molto piu' semplice
