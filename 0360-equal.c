// uso incorretto di == con numeri a virgola mobile
#include<stdio.h>
#include<stdlib.h>

int main() 
{ 
    float x =  1.0/10.0;

    printf("Il valore contenuto in x e' %f\n", x);

    if (x == 0.1) 
        printf("Quindi x e' uguale a 0.1\n"); 
    else
        printf("Eppure secondo l'operatore == x risulta diverso da 0.1\n"); 

  return 0;
}

