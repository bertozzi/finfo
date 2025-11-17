// la ricorsione, esempio MCD
#include<stdio.h>
#include<stdlib.h>

/*

   Il massimo comun divosore di N e M ovvero MCD(M, N)
   e' calcolabile come
     M           se M = N
     MCD(M-N, N) se M > N
     MCD(N-M, M) se N > M

*/

int mcd(int, int);

int main(int argc, char **argv){

  int a, b;

  printf("Inserisci due numeri interi: ");
  scanf("%d%d", &a, &b);

  printf("Il Massimo Comun Divisore di %d e %d e': %d\n", a, b, mcd(a,b));

  return 0;
}

int mcd(int m, int n)
{
  if(m == n)
    return m;

  if(m > n)
    return mcd(m - n, n);

  return mcd(n - m, m);
}
