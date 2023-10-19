// il tipo char, tabella ASCII
#include<stdio.h>
#include<stdlib.h>

#include<ctype.h> // mi serve per isprint()


int main(int argc, char **argv){

  for(int r = 0; r < 16; ++r)
  {
    for(int c = 0; c < 128; c = c + 16)
    {
      if(isprint(r + c))
	printf("%3d [%c]  ", r + c, r + c);
      else
	printf("%3d [-]  ", r + c);
    }
    printf("\n");
  }

  return 0;
}

