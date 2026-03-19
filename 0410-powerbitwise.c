// quick check for power of 2 using bitwise operators
#include<stdio.h>
#include<stdlib.h>

void stampabinario(int x);

int main(int argc, char **argv){

  int x;
  printf("Enter a number: ");
  scanf("%d", &x);

  printf("The number you entered in binary format is ");
  stampabinario(x);
  printf("\n");

  // the approach exploits the property of powers of 2. In binary format they 
  // have only one bit set to 1. If you subract them 1 you need a borrow, namely
  // the result has all bits 1 up to the original 1 as example
  // 1024     in binary format is 10000000000
  // 1024 - 1 in binary format is 01111111111
  // obviously this is true for positive numbers only! 
  if(x > 0 && !(x & (x - 1)))
    printf("The number you entered is a power of 2\n");
  else
    printf("The number you entered is NOT a power of 2\n");

  // try some shift
  for(int i = 0; i < 5; ++i)
  {
    printf("%d left  shifted by %d positions is %8d (", x, i , x << i);
    stampabinario(x << i);
    printf(")\n");
  }

  printf("********\n");

  for(int i = 0; i < 5; ++i)
  {
    printf("%d right shifted by %d positions is %8d (", x, i , x >> i);
    stampabinario(x >> i);
    printf(")\n");
  }

  return 0;
}

void stampabinario(int x)
{
  // questa funzione stampa i 32 bit di un int
  // non conosciamo ancora il controllo di flusso, quindi e' scritta
  // in maniera non particolarmente elegante

  // per stampare estraggo i singoli bit portandoli nella posizione meno significativa
  // mediante shift a destra e poi li isolo con un and bit a bit

  printf("%d", x >> 31 & 1);
  printf("%d", x >> 30 & 1);
  printf("%d", x >> 29 & 1);
  printf("%d", x >> 28 & 1);
  printf("%d", x >> 27 & 1);
  printf("%d", x >> 26 & 1);
  printf("%d", x >> 25 & 1);
  printf("%d", x >> 24 & 1);
  printf(" ");
  printf("%d", x >> 23 & 1);
  printf("%d", x >> 22 & 1);
  printf("%d", x >> 21 & 1);
  printf("%d", x >> 20 & 1);
  printf("%d", x >> 19 & 1);
  printf("%d", x >> 18 & 1);
  printf("%d", x >> 17 & 1);
  printf("%d", x >> 16 & 1);
  printf(" ");
  printf("%d", x >> 15 & 1);
  printf("%d", x >> 14 & 1);
  printf("%d", x >> 13 & 1);
  printf("%d", x >> 12 & 1);
  printf("%d", x >> 11 & 1);
  printf("%d", x >> 10 & 1);
  printf("%d", x >>  9 & 1);
  printf("%d", x >>  8 & 1);
  printf(" ");
  printf("%d", x >>  7 & 1);
  printf("%d", x >>  6 & 1);
  printf("%d", x >>  5 & 1);
  printf("%d", x >>  4 & 1);
  printf("%d", x >>  3 & 1);
  printf("%d", x >>  2 & 1);
  printf("%d", x >>  1 & 1);
  printf("%d", x       & 1);
}


