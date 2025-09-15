// passaggio array ad una funzione
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

// questa funzione prende in ingresso una stringa e la converte in maiuscolo
void uppercase(char []); // la funzione prende in ingresso un array di char, si noti che e' del tutto inutile indicare le dimensioni


int main(int argc, char **argv){

  char testo[1000]; // array in cui memorizzero' la stringa, sto largo per sicurezza

  printf("Inserisci una frase: ");
  scanf("%[^\n]", testo);

  printf("DEBUG: la frase inserita e' [%s] ed e' costituita da %lu caratteri ed e' memorizzata in un array di %lu char\n", testo, strlen(testo), sizeof(testo));

  uppercase(testo);

  printf("Dopo la chiamata di funzione la frase e' diventata [%s]\n", testo);



  return 0;
}





// NOTA: non sto passando un array generico ma una stringa, grazie alla strlen() e' semplice sapere quanto 
// e' lunga
void uppercase(char mystr[]) 
{
  printf("DEBUG: la frase passata alla funzione e' [%s] ed e' costituita da %ld caratteri. Il parametro della funzione ha dimensione %ld byte\n", mystr, strlen(mystr), sizeof(mystr));

  for(int i=0; i<strlen(mystr); ++i)
    mystr[i] = toupper(mystr[i]);
}
