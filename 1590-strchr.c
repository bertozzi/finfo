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
    printf("Cerco il carattere %c in '%s': ", c, p);
    p = strchr(p, c);
    if(!p)
    {
     printf("non trovato\n");
     break;
    }
    printf("trovato in posizione %ld\n", p-s);
    ++p;
  }


  return 0;
}


