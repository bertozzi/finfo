// intervallo numeri a virgola mobile, macro sizeof()
#include <stdio.h>
#include <stdlib.h>
#include <float.h> // contiene le costanti usate in questo esempio

int main(int argc, char** argv) {

    printf("Storage size for float : %ld \n", sizeof(float)); // sizeof() restituisce quanti byte occupa un tipo di dato
    printf("FLT_MAX     :   %g\n", FLT_MAX);
    printf("FLT_MIN     :   %g\n", FLT_MIN);
    printf("Number of decimal digits that can be accurately represented: %d\n", FLT_DIG );

    printf("\nStorage size for double : %ld \n", sizeof(double));
    printf("DBL_MAX     :   %g\n", DBL_MAX);
    printf("DBL_MIN     :   %g\n", DBL_MIN);
    printf("Number of decimal digits that can be accurately represented: %d\n", DBL_DIG );

    printf("\nStorage size for long double : %ld \n", sizeof(long double));
    printf("LDBL_MAX    :   %Lg\n",  LDBL_MAX);
    printf("LDBL_MIN    :   %Lg\n",  LDBL_MIN);
    printf("Number of decimal digits that can be accurately represented: %d\n", LDBL_DIG );

    float        fl  = 1.0f/7.0f;  // 1/7, in formato decimale, e' un numero periodico (0.142857) a cui seguono infinite ripetizioni di 142857
    double       db  = 1.0/7.0;
    long double  ldb = 1.0L/7.0L;

    printf("\nPrecision Examples:\n\n");
    printf("float       -> %.30f\n",  fl);
    printf("                 ******\n");
    printf("double      -> %.30lf\n", db);
    printf("                 ***************\n");
    printf("long double -> %.30Lf\n", ldb);
    printf("                 ******************\n");

    return 0;
}
