// assert() macro
#include <stdio.h>
#include <stdlib.h>

// adding a "#define NDEBUG" BEFORE the #include<assert.h> disable all assert() 
#define NDEBUG 
#include <assert.h>

int main(int argc, char **argv) {
  int x = 7;

  /*  assume that here there is a lot of code, and
      that, by mistake, the content of x is changed!
      this is a bug if I assume that x is 7.
      an assert can easily spot this situation
   */
  x = 9; // my bug

  // assertion that check the code
  assert(x==7);

  /* Rest of the code */

  return 0;
}
