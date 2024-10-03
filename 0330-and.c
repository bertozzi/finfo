// operatore logico AND, operatore relazionale < e espressione semanticamente non corretta
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  int a = 15;

  int val1 = 0 < a < 10;            // FIXME the compiler gives us a warning, not an error!
  int val2 = 0 < a && a < 10;

  printf("(0 < a < 10)      con a = %3d is evaluated as: %d\n", a, val1);
  printf("(0 < a && a < 10) con a = %3d is evaluated as: %d\n", a, val2);

  a = -10;

  val1 = 0 < a < 10;            // FIXME the compiler gives us a warning, not an error!
  val2 = 0 < a && a < 10;

  printf("(0 < a < 10)      con a = %3d is evaluated as: %d\n", a, val1);
  printf("(0 < a && a < 10) con a = %3d is evaluated as: %d\n", a, val2);

  a = 5;

  val1 = 0 < a < 10;            // FIXME the compiler gives us a warning, not an error!
  val2 = 0 < a && a < 10;

  printf("(0 < a < 10)      con a = %3d is evaluated as: %d\n", a, val1);
  printf("(0 < a && a < 10) con a = %3d is evaluated as: %d\n", a, val2);

  return 0;
}

/* OUTPUT

(0 < a < 10)      con a =  15 is evaluated as: 1
(0 < a && a < 10) con a =  15 is evaluated as: 0
(0 < a < 10)      con a = -10 is evaluated as: 1
(0 < a && a < 10) con a = -10 is evaluated as: 0
(0 < a < 10)      con a =   5 is evaluated as: 1
(0 < a && a < 10) con a =   5 is evaluated as: 1

The underlying reason why "0 < a < 15" is not working is that
the system split the evaluation of this expression as ((0 < a) < 15)
Namely, the expression is evaluated starting from the left, the first operator it finds
is the left "<" then "0 < a" is evaluated. When a == 15 this means "true" namely "1".
The resulting "1" is then used for evaluating the other part of the expression as
"1 < 10" that is obviously true and therefore 1.
This also is true when a == -10. In such case the first part of the expression is
"0" and not "1", but "0 < 10" is anyway true as well.

*/

