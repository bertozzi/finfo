// bitfield: syntax & memory size
#include<stdio.h>
#include<stdlib.h>


struct printer {
  unsigned short status : 2;
  unsigned short data   : 8;
  unsigned short paper  : 2;
  unsigned short error  : 4;
};

struct printer_ex {
    unsigned short status;
    unsigned short data;
    unsigned short paper;
    unsigned short error;
};

int main(int argc, char **argv){

  struct printer a;
  struct printer_ex b;

  printf("a 'struct printer'    variables can be stored in %ld bytes'\n", sizeof(a));
  printf("a 'struct printer_ex' variables can be stored in %ld bytes'\n", sizeof(b));


  return 0;
}

