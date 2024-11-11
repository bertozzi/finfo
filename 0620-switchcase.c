// esempio switch()-case
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  int d, m, y;

  printf("Inserisci una data nel formato gg/mm/aaaa: ");
  scanf("%d/%d/%d", &d, &m ,&y);

  printf("La data in inglese sarebbe: ");

  switch(m)
  {
    case 12: printf("December");  break;
    case 11: printf("November");  break;
    case 10: printf("October");   break;
    case  9: printf("September"); break;
    case  8: printf("August");    break;
    case  7: printf("July");      break;
    case  6: printf("June");      break;
    case  5: printf("May");       break;
    case  4: printf("April");     break;
    case  3: printf("March");     break;
    case  2: printf("February");  break;
    case  1: printf("January");   break;
  } // manca il default (non serve se assumiamo che la data sia corretta)

  printf(" %d", d);
  switch(d%10) // restituisce l'unità
  {
    case 1: printf("st");  break;
    case 2: printf("nd");  break;
    case 3: printf("rd");  break;
    default: printf("th"); break;

  }

  printf(", %d\n", y);


  return 0;
}

