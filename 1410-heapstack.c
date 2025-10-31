// heap, stack, code & data...
#include<stdio.h>
#include<stdlib.h>

int global_int_var;

int main(int argc, char **argv){

  int local_int_var;
  int n;

  printf("Inserisci un numero intero positivo: ");
  scanf("%d", &n);

  int local_int_vla[n];   
  int *local_int_malloc = malloc(n*sizeof(int));

  printf("Indirizzo della variabile locale            %p\n", &local_int_var);
  printf("Indirizzo del VLA                           %p\n", local_int_vla);
  printf("Indirizzo restituito da malloc()            %p\n", local_int_malloc);
  printf("Indirizzo della variabile globale           %p\n", &global_int_var);
  printf("Indirizzo della main()                      %p\n", main);   // anticipazione, nome della funzione senza le () e' indirizzo della funzione in memoria

  return 0;
}
/*

Inserisci un numero intero positivo: 200
Indirizzo della variabile locale            0x7ffc31dbe818
Indirizzo del VLA                           0x7ffc31dbe4e0
Indirizzo restituito da malloc()            0x55d555b7aac0
Indirizzo della variabile globale           0x55d554cc5014
Indirizzo della main()                      0x55d554cc21a9

*/
