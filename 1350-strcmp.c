// nuovi elementi string.h -> strcmp()
#include<stdio.h>
#include<stdlib.h>

#include<string.h>

int main(int argc, char **argv){

  char a[]="Fondamenti";
  char b[]="Fondamenti";
  char c[]="FONDAMENTI";

  printf("a=[%s]\n", a);
  printf("b=[%s]\n", b);
  printf("c=[%s]\n", c);


  if(a==b) // con gli array NON funziona, sto confrontando i loro indirizzi in memoria
    printf("I valori di a e b sono uguali\n");
  else
    printf("I valori di a e b sono differenti\n");


  printf("a==b        vale %d\n", a==b);
  printf("a=%p\n", a);
  printf("b=%p\n", b);
  printf("strcmp(a,b) vale %d\n", strcmp(a,b));
  printf("strcmp(a,c) vale %d\n", strcmp(a,c));
  printf("strcmp(c,a) vale %d\n", strcmp(c,a));



  return 0;
}

/*

   int strcmp(const char *s1, const char *s2);

   compara tutti i caratteri e restituisce
    - 0 se le due stringhe sono uguali
    - un valore > 0 se s1 ">" s2
    - un valore < 0 se s1 "<" s2

*/

