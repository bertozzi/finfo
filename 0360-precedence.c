// precedenza e associativita' operatori
#include<stdio.h>
#include<stdlib.h>

int main() 
{

  int a = 20;
  int b = 10;
  int c = 15;
  int d = 4;
  int e;

  // * and / operators have precedence wrt + and -
  // but * and / in which order are computed? And why? Associativity!
  e = a + b * c / d;     
  printf("Value of a + b * c / d       is: %d\n" ,  e );

  e = (a + (b * (c / d)));   
  printf("Value of (a + (b * (c / d))  is: %d\n",  e );

  e = (a + ((b * c) / d));   
  printf("Value of (a + ((b * c) / d)) is: %d\n",  e );


  // associativity right to left
  e = ( a = b = c = d );
  printf("Value of a = b = c = d      is: %d\n",   e);

  return 0;
}
