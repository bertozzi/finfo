// valutazione condizioni: confronto multiplo mediante if()-else a cascata
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  int voto;

  printf("Inserisci il voto che hai preso (intero [0,10]): ");
  scanf("%d", &voto);

  if(voto == 10)
      printf("Eccellente!\n");
  else if(voto == 9)
      printf("Veramente ottimo\n");
  else if(voto == 8)
      printf("Ottimo\n");
  else if(voto == 7)
      printf("Buono\n");
  else if(voto == 6)
      printf("Sufficiente\n");
  else if(voto == 5)
      printf("Insufficiente\n");
  else
      printf("Gravemente insufficiente\n");
      


  return 0;
}

