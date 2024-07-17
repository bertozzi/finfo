// numeri float e inf
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<float.h> // contiene definizione costanti INFINITY e NAN

int main(int argc, char **argv){

    printf("isinf(0.0)         = %2d   (%f)\n",     isinf(0.0)           , 0.0);
    printf("isinf(-10/0.0)     = %2d   (%f)\n",     isinf(-10/0.0)       , -10/0.0);  // notare come non dia errore ne' in compilazione, ne' in esecuzione
    printf("isinf(DBL_MIN/2.0) = %2d   (%f)\n",     isinf(DBL_MIN/2.0)   , DBL_MIN/2.0);
    printf("isinf(1.0)         = %2d   (%f)\n",     isinf(1.0)           , 1.0);
    printf("isinf(exp(800))    = %2d   (%f)\n",     isinf(exp(800))      , exp(800)); // exp(800) restituisce e^800

  return 0;
}

/*
isinf(0.0)         =  0   (0.000000)
isinf(-10/0.0)     = -1   (-inf)
isinf(DBL_MIN/2.0) =  0   (0.000000)
isinf(1.0)         =  0   (1.000000)
isinf(exp(800))    =  1   (inf)
*/
