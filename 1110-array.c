// array monodimensionali
#include<stdio.h>
#include<stdlib.h>


int main(int argc, char **argv){

  int numbers[100]; // array monodimensionale di 100 int 
  unsigned int n;

  printf("Quanti numeri vuoi sommare (max 100)? ");
  scanf("%u", &n);

  if(n<=100)
  {
    // azzero l'array (non serve!)
    for(int i=0; i<100; ++i) // abituarsi a cicli che partono da 0
      numbers[i] = 0;  // accesso a singolo elemento tramite indice 
    
    // li leggo da tastiera
    for(int i=0; i<n; ++i) 
    {
      printf("Inserisci il numero intero #%d: ", i+1);
      scanf("%d", &numbers[i]); // per leggere con scanf() uso la & come per una variabile "normale"
    }

    // li stampo
    printf("I numeri inseriti sono: ");
    for(int i=0; i<n; ++i)
    {
      printf("%d ", numbers[i]); 
    }


    // calcolo la somma (di fatto potevo farlo in uno dei cicli precedenti)
    int sum = 0;
    for(int i=0; i<n; ++i)
      sum += numbers[i];

    printf("\nla loro somma e': %d\n", sum);

  } // if(n<=100)



  return 0;
}

