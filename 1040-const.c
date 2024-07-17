// costanti, uso di const
#include<stdio.h>
#include<stdlib.h>

const double PI_GRECA = 3.14159265358979323846;

int main(int argc, char **argv){

  double r;

  printf("Inserisci il raggio: ");
  scanf("%lf", &r);

  printf("La circonferenza di raggio %g vale %g\n", r, 2*r*PI_GRECA);
  printf("Il cerchio di raggio %g ha area %g\n",    r, PI_GRECA*r*r);


  return 0;
}

