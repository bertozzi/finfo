// suffissi per double e long double
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

  float fl;
  double db;
  long double ldb;

  printf("Inserisci tre numeri a virgola mobile: ");
  scanf("%f %lf %Lf", &fl, &db, &ldb); 
  // in input prefisso l per double e L per long double

  // ATTENZIONE: in output il prefisso 'l' lo posso omettere
  printf("In formato decimale hai inserito:    %f %f %Lf\n", fl, db, ldb);   // di solito 6 cifre dopo la virgola
  printf("In formato scientifico hai inserito: %e %e %Le\n", fl, db, ldb);  
  printf("In formato scientifico hai inserito: %E %E %LE\n", fl, db, ldb);  
  printf("Io scelgo di stamparli come:         %g %g %Lg\n", fl, db, ldb);  

  printf("In formato esadecimale sarebbero:    %A %A %LA\n", fl, db, ldb);   // never used in my whole life!

    return 0;
}
