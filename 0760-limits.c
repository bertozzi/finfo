// nuovi concetti limit.h e intervallo valori dei tipi interi
#include<stdio.h>
#include<stdlib.h>

#include<limits.h>


int main(int argc, char **argv){

  printf("minimum char           = %d (%zd)\n ",  CHAR_MIN,  sizeof(char));
  printf("maximum char           = %d (%zd)\n ",  CHAR_MAX,  sizeof(char));
  printf("minimum short          = %d (%zd)\n ",  SHRT_MIN,  sizeof(short));
  printf("maximum short          = %d (%zd)\n ",  SHRT_MAX,  sizeof(short));
  printf("minimum int            = %d (%zd)\n ",  INT_MIN,   sizeof(int));
  printf("maximum int            = %d (%zd)\n ",  INT_MAX,   sizeof(int));
  printf("minimum long           = %ld (%zd)\n ", LONG_MIN,  sizeof(long));
  printf("maximum long           = %ld (%zd)\n ", LONG_MAX,  sizeof(long));
  printf("minimum long long      = %Ld (%zd)\n ", LLONG_MIN, sizeof(long long));
  printf("maximum long long      = %Ld (%zd)\n ", LLONG_MAX, sizeof(long long));
  printf("minimum signed char    = %d (%zd)\n ",  SCHAR_MIN, sizeof(signed char));
  printf("maximum signed char    = %d (%zd)\n ",  SCHAR_MAX, sizeof(signed long));
  printf("maximum unsigned char  = %d (%zd)\n ",  UCHAR_MAX, sizeof(unsigned char));
  printf("maximum unsigned short = %d (%zd)\n ",  USHRT_MAX, sizeof(unsigned short));
  printf("maximum unsigned int   = %u (%zd)\n ",  UINT_MAX,  sizeof(unsigned int));
  printf("maximum unsigned long  = %lu (%zd)\n ", ULONG_MAX, sizeof(unsigned long));


  return 0;
}

