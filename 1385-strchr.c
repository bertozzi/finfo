// ricerca caratteri esaustiva
#include<stdio.h>
#include<stdlib.h>

#include<string.h>

int main(int argc, char **argv){

  char s[] = "The Mississippi is a long river.", *p, c;

  printf("s=[%s]\n", s);

  printf("Inserisci il carattere da cercare nella stringa: ");
  scanf("%c", &c);

  p = s;
  while(1)
  {
    p = strchr(p, c);
    if(!p) break;
    printf("Ho trovato il carattere in posizione %ld (%s)\n", p-s, p);
    ++p;
  }


  return 0;
}


