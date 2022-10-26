// ricerca caratteri e sottostringhe
#include<stdio.h>
#include<stdlib.h>

#include<string.h>

int main(int argc, char **argv){

  char s[] = "The Mississippi is a long river.", *p;

  printf("s=[%s]\n", s);

  p = strchr(s,' ');    // cerco nella stringa s la prima occorrenza del carattere ' '. Se c'e' ne restituisco l'indirizzo in p (altrimenti NULL)
  printf(" strchr(s,' ') punta a s[%ld]\n", p-s);  // aritmentica dei puntatori la differenza tra due indirizzi rappresenta il numero di posizioni tra l'uno e l'altro

  p = strchr(s,'s');   // come sopra ma cerco il carattere 's'
  printf(" strchr(s,'s') punta a s[%ld]\n", p-s);

  p = strrchr(s,'s');  // cerco nella stringa l'ultima occorrenza della lettera 's' ovvero come sopra ma ricerco partendo da destra
  printf(" strrchr(s,'s') punta a s[%ld]\n", p-s);

  p = strstr(s,"is");  // cerco la prima occorrenza della stringa "is"
  printf(" strstr(s,\"is\") punta a s[%ld]\n", p-s);

  p = strstr(s,"isi");  // cerco la prima occorrenza della stringa "isi", ma in questo caso controllo se l'ho trovata. Spoiler: NO
  if (p == NULL) 
    printf(" strstr(s,\"isi\") restituisce NULL\n");



  return 0;
}

/* ESECUZIONE

 s=[The Mississippi is a long river.]
  strchr(s,' ') punta a s[3]
  strchr(s,'s') punta a s[6]
  strrchr(s,'s') punta a s[17]
  strstr(s,"is") punta a s[5]
  strstr(s,"isi") restituisce NULL

*/

