// union in struct: uso tipico per rappresentare tipi variabili
#include<stdio.h>
#include<stdlib.h>

// pattern classico: struct con un campo "tipo" (enum) e una union
// il campo "tipo" indica quale campo della union e' valido
enum tipo_valore { INTERO, REALE, CARATTERE };

struct valore
{
  enum tipo_valore tipo;
  union {
    int   i;
    float f;
    char  c;
  } dato;
};

void stampa(struct valore v)
{
  switch(v.tipo)
  {
    case INTERO:    printf("intero:    %d\n",  v.dato.i); break;
    case REALE:     printf("reale:     %f\n",  v.dato.f); break;
    case CARATTERE: printf("carattere: %c\n",  v.dato.c); break;
  }
}

int main(int argc, char **argv){

  struct valore a = { INTERO,    { .i = 42    } };
  struct valore b = { REALE,     { .f = 2.71f } };
  struct valore c = { CARATTERE, { .c = 'Z'   } };

  stampa(a);
  stampa(b);
  stampa(c);

  return 0;
}
