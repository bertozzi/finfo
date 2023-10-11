// specificatori di formato per il tipo base float
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  printf("%f\n", 123.4567890123456); // stampa in formato decimale
  printf("%F\n", 123.4567890123456); // stampa in formato decimale maiuscolo
  printf("%e\n", 123.4567890123456); // stampa in formato scientifico
  printf("%E\n", 123.4567890123456); // stampa in formato scientifico maiuscolo
  printf("%g\n", 123.4567890123456); // stampa in formato breve
  printf("%G\n", 123.4567890123456); // stampa in formato breve maiuscolo

  // nel caso di %g e %G il sistema sceglie automaticamente se formato decimale o scientifico
  printf("%g\n", 123456789.0123456); // stampa in formato breve
  printf("%G\n", 123456789.0123456); // stampa in formato breve maiuscolo


  return 0;
}

/*
   123.456789
   123.456789
   1.234568e+02
   1.234568E+02
   123.457
   123.457
   1.23457e+08
   1.23457E+08
*/
