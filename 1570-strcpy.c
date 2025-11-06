// copia  e concatenazione di stringhe
#include<stdio.h>
#include<stdlib.h>

#include<string.h>

int main(int argc, char **argv){

  char s1[400] = "The Mississippi is a long river.";
  char s2[400] = ""; // stringa vuota (ma il carattere di terminazione '\0' c'e'!

  printf("s1=[%s]\n", s1);
  printf("s2=[%s]\n", s2);

  // s2=s1 FIXME non si puo' fare

  strcpy(s2, s1);    // copio il contenuto di s1 in s2 (posso vederlo come assegnamento)
  printf("dopo strcpy(s2, s1),  s2=[%s]\n", s2); 

  strcat(s2, s1);     // accodo al contenuto di s2 quello di s1
  printf("dopo strcat(s2, s1),  s2=[%s]\n", s2);

  strcpy(s2, "");     // copio in s2 una stringa costante
  printf("dopo strcpy(s2, \"\"),  s2=[%s]\n", s2);

  strcpy(s2, "Fondamenti");  // copio in s2 una stringa costante
  printf("dopo strcpy(s2, \"Fondamenti\"),  s2=[%s]\n", s2); 

  strncpy(s2 ,s1, 5);       // copio in s2 i primi 5 caratteri di s1 (o quelli che ci sono se s1 contiene meno di 5 caratteri incluso il carattere di terminazione) 
  printf("dopo strncpy(s2, s1, 5),  s2=[%s]\n", s2);

  strncpy(s2 ,"topo", 5);  // come sopra ma con stringa costante 
  printf("dopo strncpy(s2, \"topo\", 5),  s2=[%s]\n", s2);

  return 0;
}

/* 
   ESECUZIONE

s1=[The Mississippi is a long river.]
s2=[]
dopo strcpy(s2, s1),  s2=[The Mississippi is a long river.]
dopo strcat(s2, s1),  s2=[The Mississippi is a long river.The Mississippi is a long river.]
dopo strcpy(s2, ""),  s2=[]
dopo strcpy(s2, "Fondamenti"),  s2=[Fondamenti]
dopo strncpy(s2, s1, 5),  s2=[The Mmenti]
dopo strncpy(s2, "topo", 5),  s2=[topo]

*/


