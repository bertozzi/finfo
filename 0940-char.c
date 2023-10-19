// apici singoli, il tipo char e' comunque un tipo di dato numerico intero
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  // stampo i codici ASCII delle lettere e delle cifre

  for(char a='A'; a<='Z'; ++a)
    printf("Il codice ASCII di [%c] e' %d\n", a, a);

  for(char a='0'; a<='9'; ++a)
    printf("Il codice ASCII di [%c] e' %d\n", a, a);


  return 0;
}

/*
Il codice ASCII di [A] e' 65
Il codice ASCII di [B] e' 66
Il codice ASCII di [C] e' 67
Il codice ASCII di [D] e' 68
Il codice ASCII di [E] e' 69
Il codice ASCII di [F] e' 70
Il codice ASCII di [G] e' 71
Il codice ASCII di [H] e' 72
Il codice ASCII di [I] e' 73
Il codice ASCII di [J] e' 74
Il codice ASCII di [K] e' 75
Il codice ASCII di [L] e' 76
Il codice ASCII di [M] e' 77
Il codice ASCII di [N] e' 78
Il codice ASCII di [O] e' 79
Il codice ASCII di [P] e' 80
Il codice ASCII di [Q] e' 81
Il codice ASCII di [R] e' 82
Il codice ASCII di [S] e' 83
Il codice ASCII di [T] e' 84
Il codice ASCII di [U] e' 85
Il codice ASCII di [V] e' 86
Il codice ASCII di [W] e' 87
Il codice ASCII di [X] e' 88
Il codice ASCII di [Y] e' 89
Il codice ASCII di [Z] e' 90
Il codice ASCII di [0] e' 48
Il codice ASCII di [1] e' 49
Il codice ASCII di [2] e' 50
Il codice ASCII di [3] e' 51
Il codice ASCII di [4] e' 52
Il codice ASCII di [5] e' 53
Il codice ASCII di [6] e' 54
Il codice ASCII di [7] e' 55
Il codice ASCII di [8] e' 56
Il codice ASCII di [9] e' 57
*/
