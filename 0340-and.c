// operatore logico AND, > e cortocircuito valutazioni espressioni logiche

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){
  int n, d;

  printf("Please, enter two positive integer numbers: ");
  scanf("%d", &n);
  scanf("%d", &d);

  int risultato = (d != 0 && n%d == 0); 
  printf("Il risultato dell'espressione (%d != 0 && %d%%%d == 0) e' %d\n", d, n, d, risultato);

  // lets try the same expression simply inverting the operands
  // formally this should be the same as previous one 
  risultato = (n%d == 0 && d != 0);
  printf("Il risultato dell'espressione ( %d%%%d == 0 && %d != 0) e' %d\n", d, n, d, risultato);

  /* FIXME
     when we input 0 for d the program fails during execution. Why?
     When d == 0, n%d can not be computed sine it implies a division by 0
     But in both conditions we have n%d, and therefore why the evaluation
     of the first expression does not fail?
     Anyway, when logical operators are used, shortcuts are applied.
     The evaluation of && stops when the first operand is false, since
     this implies that the whole expression is obviously false.
     Therefore the evaluation of (d != 0 && n%d == 0) stops when d == 0 
     without even bothering to compute n%d == 0
     This is not happening when the second expression is evaluated.
     In such a case, initially the system tries to evaluate n%d == 0
     therefore failing...

   */



  return 0;
}

