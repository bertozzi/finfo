// funzione che restituisce piu' di 1 singolo valore
#include<stdio.h>
#include<stdlib.h>

void prodotto_complessi(float, float, float, float, float *, float *);

int main(int argc, char **argv){
  float prima_reale, prima_imm, seconda_reale, seconda_imm;  // parte reale e immaginaria dei due numeri complessi da moltiplicare
  float ris_reale, ris_imm;                                  // parte reale e immaginaria del risultato

  printf("Inserisci parte reale e immaginaria di un   primo numero complesso: ");
  scanf("%f%f", &prima_reale, &prima_imm);

  printf("Inserisci parte reale e immaginaria di un secondo numero complesso: ");
  scanf("%f%f", &seconda_reale, &seconda_imm);

  prodotto_complessi(prima_reale, prima_imm, seconda_reale, seconda_imm, &ris_reale, &ris_imm); // degli operandi passo il valore, del risultato gli indirizzi

  printf("(%f%+fi)*(%f%+fi) = %f%+fi\n", prima_reale, prima_imm, seconda_reale, seconda_imm, ris_reale, ris_imm);

  return 0;
}

// prendo in ingresso parte reale e immaginaria di due numeri
// voglio calcolare il loro prodotto e restituirlo
// PROBLEMA: il risultato sara' comunque costituito da 2 valori, ma return permettge di restituirne uno solo, come risolvo?
// SOLUZIONE: prendo in ingresso anche l'indirizzo di due variabili in cui andare a depositare il risultato

void prodotto_complessi(float ar, float ai, float br, float bi, float *rr, float *ri)
{

  *rr = ar*br - ai*bi; // memorizzo il risultato all'indirizzo puntato da rr
  *ri = ar*bi + br*ai; // memorizzo il risultato all'indirizzo puntato da ri

} // return non necessario, la funzione termina qui

