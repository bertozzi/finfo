// enum: definizione e uso base
#include<stdio.h>
#include<stdlib.h>

// enum definisce un tipo intero con valori nominali
// di default: LUNES=0, MARTEDI=1, ...
enum giorno
{
  LUNEDI,
  MARTEDI,
  MERCOLEDI,
  GIOVEDI,
  VENERDI,
  SABATO,
  DOMENICA
};

int main(int argc, char **argv){

  enum giorno oggi = MERCOLEDI;

  // internamente e' un intero
  printf("MERCOLEDI vale %d\n", MERCOLEDI);
  printf("DOMENICA vale %d\n", DOMENICA);

  // si puo' usare in espressioni booleane
  if(oggi == SABATO || oggi == DOMENICA)
    printf("e' weekend\n");
  else
    printf("e' un giorno feriale\n");

  return 0;
}
