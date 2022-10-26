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

