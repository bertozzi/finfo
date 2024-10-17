// il tipo char, tabella ASCII
#include<stdio.h>
#include<stdlib.h>

#include<ctype.h> // mi serve per isprint()


int main(int argc, char **argv){

  for(int r = 0; r < 16; ++r)
  {
    for(int c = 0; c < 128; c = c + 16)
    {
      int ascii_code = r + c;
      if(isprint(ascii_code))
	printf("%3d [%c]  ", ascii_code, ascii_code);
      else
	printf("%3d [-]  ", ascii_code);
    }
    printf("\n");
  }

  return 0;
}

