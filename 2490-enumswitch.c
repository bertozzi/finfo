// enum: uso naturale con switch
#include<stdio.h>
#include<stdlib.h>

// i valori possono essere assegnati esplicitamente
enum stagione
{
  PRIMAVERA = 1,
  ESTATE    = 2,
  AUTUNNO   = 3,
  INVERNO   = 4
};

int main(int argc, char **argv){

  enum stagione s;

  printf("inserisci stagione (1=primavera 2=estate 3=autunno 4=inverno): ");
  scanf("%d", (int*)&s);

  // enum + switch: il compilatore avvisa se manca un caso
  switch(s)
  {
    case PRIMAVERA: printf("fa fresco\n");    break;
    case ESTATE:    printf("fa caldo\n");     break;
    case AUTUNNO:   printf("piove\n");        break;
    case INVERNO:   printf("fa freddo\n");    break;
    default:        printf("valore non valido\n");
  }

  return 0;
}
