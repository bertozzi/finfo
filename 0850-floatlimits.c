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

    float        fl  = 1.1f; // 23 bit mantissa
    double       db  = 1.1;  // 54 bit mantissa
    long double  ldb = 1.1L; // 80 bit mantissa

    printf("\nPrecision Examples:\n\n");
    printf("float       -> %.30f \t %f\n",  fl, fl);
    printf("                 ******\n");
    printf("double      -> %.30lf \t %lf\n", db, db);
    printf("                 ***************\n");
    printf("long double -> %.30Lf \t %Lf\n", ldb, ldb);
    printf("                 ******************\n");


    return 0;
}
/*
Storage size for float : 4 
FLT_MAX     :   3.40282e+38
FLT_MIN     :   1.17549e-38
Number of decimal digits that can be accurately represented: 6

Storage size for double : 8 
DBL_MAX     :   1.79769e+308
DBL_MIN     :   2.22507e-308
Number of decimal digits that can be accurately represented: 15

Storage size for long double : 16 
LDBL_MAX    :   1.18973e+4932
LDBL_MIN    :   3.3621e-4932
Number of decimal digits that can be accurately represented: 18

Precision Examples:

float       -> 1.100000023841857910156250000000 	 1.100000
                 ******
double      -> 1.100000000000000088817841970013 	 1.100000
                 ***************
long double -> 1.100000000000000000021684043450 	 1.100000
                 ******************
  */
