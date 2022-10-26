// Iterazioni, il ciclo while()
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  int x, sum=0;
  
  printf("Inserisci un numero intero positivo: ");
  scanf("%d", &x);

  printf("La somma dei numeri da 1 a %d vale: ", x);

  while(x>0)
  {
    sum += x;  // ad ogni volta sommo x a sum
    --x;       // decremento x (fondamentale!)
  }

  printf("%d\n", sum);


  return 0;
}

