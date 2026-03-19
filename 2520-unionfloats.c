// analisi della rappresentazione interna di un float mediante union e operazioni bit a bit
#include<stdio.h>
#include<stdlib.h>

union mybits
{
  float        f;
  unsigned int u;
};  
// in una union tutti i dati sono sovrapposti
// visto che (per il nostro compilatore) float e unsigned int sono 
// entrambi 4 byte, si sovrappongono esattamente

int main(void) 
{

  union mybits x;

  printf("Inserisci un numero frazionario: ");
  scanf("%g", &x.f);   // leggo e scrivo dentro l'elemento f della union x
  // di fatto gli stessi bit di x.u

  unsigned sign     =  (x.u >> 31) & 0x1;                 // il bit piu' significativo e' il bit di segno
  unsigned exponent =  (x.u >> 23) & 0xFF;                // 8 bit di esponente
  unsigned mantissa =   x.u        & 0x7FFFFF;            // 21 bit di mantissa

  printf("value    : %f\n",  x.f);
  printf("raw bits : 0x%08x\n", x.u);
  printf("sign     : %u\n",  sign);
  printf("exponent : %u  (biased), %d (real)\n", exponent, (int)exponent - 127);
  printf("mantissa : 0x%06x\n", mantissa);

  return 0;
}

/* ESEMPIO DI ESECUZIONE

Inserisci un numero frazionario: -6.5
value    : -6.500000
raw bits : 0xc0d00000
sign     : 1
exponent : 129  (biased), 2 (real)
mantissa : 0x500000

SPIEGAZIONE 

Ricordiamoci che nel formato IEEE 794 il valore di quel float lo ricavo come
(scrivo l'elevazione a potenza usando '^' che in C significa tutt'altro...):

<bit di segno> * 1.<mantissa in binario> * 2 ^<exponent - 127> 

Nel nostro caso:

sign =  1           -> numero negativo
exponent real = 2   -> elevero' 2 alla 2 
mantissa = 0x500000 -> in binario 10100000000000 (perche' manca lo 0 iniziale?)

Quindi: -1 * 1.101 * 2^2 che fornisce esattamente -6.5
A rigore, dovevo scriverla totalmente in binario:

-1 * 1.101 * 10^10  tutte le basi sono base 10 ;)


*/

