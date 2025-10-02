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

  printf("Per stampare solo la parte intera %.0f\n", pi);

  return 0;
}

/*
Il raggio vale:             57 m
La circonferenza vale       358.141571 m
L'area del cerchio vale     10207.035156 m^2
ma la posso scrivere anche  1.020704E+04 m^2
        57 m
    358.14 m
  10207.04 m^2
  1.02E+04 m^2
0000000057 m
       +57 m
Per stampare solo la parte intera 3
*/
