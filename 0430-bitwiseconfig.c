// example of bitwise status flag
#include<stdio.h>
#include<stdlib.h>

// we want to "pack" in a single "flag" your status
// as pet owner

#define HAS_NONE              0x000
#define HAS_CAT               0x001
#define HAS_DOG               0x002
#define HAS_GUINEA            0x004
#define HAS_PIGEON            0x008
#define HAS_FERRET            0x010
#define HAS_GOLDFISH          0x020
#define HAS_CANARY            0x040
#define HAS_HEDGEHOG          0x080
#define HAS_RABBIT            0x100
// ...

void stampabinario(unsigned short);

int main(int argc, char **argv){

  // just init your config flag
  unsigned short s = 0;
  char answer;

  printf("Do you own a cat? (y/n) ");
  scanf(" %c", &answer);
  if(answer == 'y' || answer == 'Y')
    s = s | HAS_CAT;

  printf("Do you own a dog? (y/n) ");
  scanf(" %c", &answer);
  if(answer == 'y' || answer == 'Y')
    s = s | HAS_DOG;


  printf("Do you own a guinea pig? (y/n) ");
  scanf(" %c", &answer);
  if(answer == 'y' || answer == 'Y')
    s = s | HAS_GUINEA;


  printf("Do you own a pigeon? (y/n) ");
  scanf(" %c", &answer);
  if(answer == 'y' || answer == 'Y')
    s = s | HAS_PIGEON;


  printf("Do you own a ferret? (y/n) ");
  scanf(" %c", &answer);
  if(answer == 'y' || answer == 'Y')
    s = s | HAS_FERRET;


  printf("Do you own a goldfish? (y/n) ");
  scanf(" %c", &answer);
  if(answer == 'y' || answer == 'Y')
    s = s | HAS_GOLDFISH;


  printf("Do you own a canary? (y/n) ");
  scanf(" %c", &answer);
  if(answer == 'y' || answer == 'Y')
    s = s | HAS_CANARY;


  printf("Do you own a hedgedog? (y/n) ");
  scanf(" %c", &answer);
  if(answer == 'y' || answer == 'Y')
    s = s | HAS_HEDGEHOG;

  printf("Do you own a rabbit? (y/n) ");
  scanf(" %c", &answer);
  if(answer == 'y' || answer == 'Y')
    s = s | HAS_RABBIT;

  printf("Your status has pet owner is %u ", s);
  stampabinario(s);
  printf("\n");


  return 0;
}

void stampabinario(unsigned short x)
{
  // questa funzione stampa i 16 bit di uno short
  // non conosciamo ancora il controllo di flusso, quindi e' scritta
  // in maniera non particolarmente efficiente

  // per stampare estraggo i singoli bit portandoli nella posizione meno significativa
  // mediante shift a destra e poi li isolo con un and bit a bit

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

