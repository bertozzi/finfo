// Iterazioni, ciclo do-while() esempio menu'
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  int scelta;

  do
  {
    printf("\n\nESEMPIO MENU'\n");
    printf("1.\tfai qualcosa\n");
    printf("2.\tfai qualcos altro\n");
    printf("3.\tsalva su file\n");
    printf("4.\tcarica file\n");
    printf("5.\tesci\n");
    printf("\nCosa scegli? ");
    scanf("%d", &scelta);
  } 
  while(scelta<1 || scelta>5);

  switch(scelta)
  {
    case 1:
      printf("Ok hai scelto ""fai qualcosa""\n");
      break;
    case 2:
      printf("Ok hai scelto ""fai qualcos altro""\n");
      break;
    case 3:
    case 4:
      printf("di file non abbiamo ancora parlato...\n");
      break;
    case 5:
      printf("Esco. Ma lo avrei fatto lo stesso :P\n");
      break;
  }

  return 0;
}



