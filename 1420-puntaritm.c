// uso operatori [] ed equivalenza aritmetica dei puntatori
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  int a[]={11, 22, 33 ,44 ,55 ,66 ,77 ,88, 99};

  printf("a[4]   vale %d\n", a[4]);
  printf("*(a+4) vale %d\n", *(a+4));
  printf("4[a]   vale %d\n", 4[a]); // verra' segnato come errore in sede di esame


  return 0;
}

/*

   Esempio esecuzione 

   a[4]   vale 55
   *(a+4) vale 55
   4[a]   vale 55

*/


