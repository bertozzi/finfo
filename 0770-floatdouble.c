// precisione dei double e dei float
#include <stdio.h>
#include <stdlib.h>

int main (void) 
{
    float       a = 101.1;
    double      b = 101.1;
    long double c = 101.1;
    printf ("a: %f\n",  a); // 23 bit per mantissa
    printf ("b: %lf\n", b); // 52 bit per mantissa
    printf ("c: %Lf\n", c); // 80 bit per mantissa

    printf("Il numero di byte occupati da ""float"", ""double"" e ""long double"" sono rispettivamente %ld, %ld e %ld\n",
      sizeof(float), sizeof(double), sizeof(long double)); 


    return 0;
}
