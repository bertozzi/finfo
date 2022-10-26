// valutazione condizioni: switch()-case con case multipli
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  int voto;

  printf("Inserisci il voto che hai preso (intero [0,10]): ");
  scanf("%d", &voto);

  switch(voto){
    case 10: // confronto voto con 10 
      printf("Eccellente!\n");
      break; // serve per uscire dal blocco tra le { } 
    case 9:
    case 8:
      printf("Ottimo\n");
      break;
    case 7:
      printf("Buono\n");
      break;
    case 6:
      printf("Sufficiente\n");
      break;
    case 5:
    case 4:
      printf("Insufficiente\n");
      break;
    default:
      printf("Gravemente insufficiente\n");
      break; // XXX tecnicamente non serve
  }
      


  return 0;
}

