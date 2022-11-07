// nuovi concetti limit.h e intervallo valori dei tipi interi
#include<stdio.h>
#include<stdlib.h>

#include<limits.h>


int main(int argc, char **argv){

  printf("minimum char           = %d (%ld)\n ",  CHAR_MIN,  sizeof(char));
  printf("maximum char           = %d (%ld)\n ",  CHAR_MAX,  sizeof(char));
  printf("minimum short          = %d (%ld)\n ",  SHRT_MIN,  sizeof(short));
  printf("maximum short          = %d (%ld)\n ",  SHRT_MAX,  sizeof(short));
  printf("minimum int            = %d (%ld)\n ",  INT_MIN,   sizeof(int));
  printf("maximum int            = %d (%ld)\n ",  INT_MAX,   sizeof(int));
  printf("minimum long           = %ld (%ld)\n ", LONG_MIN,  sizeof(long));
  printf("maximum long           = %ld (%ld)\n ", LONG_MAX,  sizeof(long));
  printf("minimum long long      = %Ld (%ld)\n ", LLONG_MIN, sizeof(long long));
  printf("maximum long long      = %Ld (%ld)\n ", LLONG_MAX, sizeof(long long));
  printf("minimum signed char    = %d (%ld)\n ",  SCHAR_MIN, sizeof(signed char));
  printf("maximum signed char    = %d (%ld)\n ",  SCHAR_MAX, sizeof(signed long));
  printf("maximum unsigned char  = %d (%ld)\n ",  UCHAR_MAX, sizeof(unsigned char));
  printf("maximum unsigned short = %d (%ld)\n ",  USHRT_MAX, sizeof(unsigned short));
  printf("maximum unsigned int   = %u (%ld)\n ",  UINT_MAX,  sizeof(unsigned int));
  printf("maximum unsigned long  = %lu (%ld)\n ", ULONG_MAX, sizeof(unsigned long));


  return 0;
}

