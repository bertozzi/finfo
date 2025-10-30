// calloc() vs malloc()
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char **argv){

  // gioco un po' con la memoria (per "sporcarla") ovvero alloco array di 1000 double e ci metto dentro
  // valori a caso
  double *tmp = malloc(1000 * sizeof(double));
  for(int i = 0; i < 1000; ++i)
    tmp[i] = sqrt( rand() );

  // dopo aver "sporcato" la memoria la libero
  free(tmp);


  // a seguire il codice che testa la differenza tra malloc() e calloc()
  int n;

  printf("Dimensione dell'array da allocare? ");
  scanf("%d", &n);

  // alloco array con malloc()
  int *myarr = malloc(n * sizeof(int));

  // viene inizializzato? Vediamolo provando a stamparne il contenuto
  printf("Contenuto array allocato con malloc(): ");
  for(int i = 0; i < n; ++i)
    printf("%d ", myarr[i]);
  printf("\n");


  // ora liberiamo quell'area di memoria
  free(myarr);

  // riallochiamone un'altra ma stavolta usiamo calloc(), notare che riutilizzo myarr
  myarr = calloc(n, sizeof(int));

  // e ora e' stato inizializzato? Vediamolo provando a stamparne il contenuto
  printf("Contenuto array allocato con calloc(): ");
  for(int i = 0; i < n; ++i)
    printf("%d ", myarr[i]);
  printf("\n");


  return 0;
}

