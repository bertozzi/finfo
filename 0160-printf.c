// sequenza di escape "carriage return"
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc, char **argv){

  // simulazione barra di avanzamento

  printf("*          - 10%%");
  fflush(stdout); // magic
  sleep(1); 

  printf("\r**         - 20%%"); // lo \r indica -> riposiziona il cursore ad inizio riga
  fflush(stdout); // magic
  sleep(1); 
  

  // da qui in poi tutte uguali (o quasi)
  printf("\r***        - 30%%");
  fflush(stdout);
  sleep(1); 
  printf("\r****       - 40%%");
  fflush(stdout);
  sleep(1); 
  printf("\r*****      - 50%%");
  fflush(stdout);
  sleep(1); 
  printf("\r******     - 60%%");
  fflush(stdout);
  sleep(1); 
  printf("\r*******    - 70%%");
  fflush(stdout);
  sleep(1); 
  printf("\r********   - 80%%");
  fflush(stdout);
  sleep(1); 
  printf("\r********   - 90%%");
  fflush(stdout);
  sleep(1); 
  printf("\r*********  - 100%%\n");
  sleep(1); 


  return 0;
}

