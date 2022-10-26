// specificatori di formato
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  int raggio = 57;
  float pi = 3.1415926535897932384;

  printf("Il raggio vale:             %d m\n",   raggio);               // %d per stampare int
  printf("La circonferenza vale       %f m\n",   2*pi*raggio);          // stampa numero a virgola mobile in notazione decimale
  printf("L'area del cerchio vale     %f m^2\n", pi*raggio*raggio);
  printf("ma la posso scrivere anche  %E m^2\n", pi*raggio*raggio);     // notazione scientifica

  // nelle righe sequenti uso i caratteri di controllo per incolonnare i valori

  printf("%10d m\n",   raggio);
  printf("%10.2f m\n",   2*pi*raggio);
  printf("%10.2f m^2\n", pi*raggio*raggio);
  printf("%10.2E m^2\n", pi*raggio*raggio);

  printf("%010d m\n",   raggio);
  printf("%+10d m\n",   raggio);


  return 0;
}

