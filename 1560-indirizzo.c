// passaggio argomenti per indirizzo
#include<stdio.h>
#include<stdlib.h>

void incrementadidue(int *a) // sto passando un puntatore, quindi un indirizzo
{
  *a = *a + 2; // tramite l'operatore * accedo al dato presente a quell'indirizzo di memoria ovvero al dato puntato

  return; 
}


int main(int argc, char **argv){

  int i, x;

  for(i=1, x=1; i<10; i++)
  {
    incrementadidue(&x); // devo passare l'indirizzo della variabile che posso ottenere con l'operatore &

    printf("Al giro #%d, x vale %d\n", i, x);
  }

  // incrementadidue(10);  questo non posso farlo...

  return 0;
}

/*
OUTPUT:

Al giro #1, x vale 3
Al giro #2, x vale 5
Al giro #3, x vale 7
Al giro #4, x vale 9
Al giro #5, x vale 11
Al giro #6, x vale 13
Al giro #7, x vale 15
Al giro #8, x vale 17
Al giro #9, x vale 19

*/
