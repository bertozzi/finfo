// padding di struct
#include<stdio.h>
#include<stdlib.h>
#include<stddef.h> // per offsetof()

// le struct vanno, di norma, definite all'inizio del codice (o nei file .h)
struct mionodo
{
  char a;  // 1 byte
  char b;  // 1 byte
  int  c;  // 4 byte
};

int main(int argc, char **argv){

  struct mionodo x;

  printf("La memoria occupata da una struct di tipo mionodo e' di %ld byte\n", sizeof(x));
  printf("I singoli elementi occupano %ld byte\n", sizeof(x.a)+sizeof(x.b)+sizeof(x.c));

  printf("a si trova a %ld byte dall'inizio della struct\n", offsetof(struct mionodo, a));
  printf("b si trova a %ld byte dall'inizio della struct\n", offsetof(struct mionodo, b));
  printf("c si trova a %ld byte dall'inizio della struct\n", offsetof(struct mionodo, c));

  return 0;
}

