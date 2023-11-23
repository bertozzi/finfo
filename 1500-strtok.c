// uso di strtok()
#include<stdio.h>
#include<stdlib.h>

#include<string.h>

int main(int argc, char **argv){

  // stringa da "spezzettare", uso i backslash per indicare che la riga successiva e' comunque parte della stringa
  char incipit[] = 
"Nel mezzo del cammin di nostra vita   \
mi ritrovai per una selva oscura:      \
che la diritta via era smarrita.       \
E quanto a dir qual era e cosa dura    \
esta selva selvaggia et aspra e forte, \
che nel pensier rinova la paura!";

  // stringa che contiene i possibili delimitatori, notare che ce ne sono anche di piu' rispetto a quelli necessari
  char delimitatori[]= " :.,;'!+-";

  // puntatore che puntera' alle varie sottostringhe man mano individuate
  char *word;


  printf("La stringa da spezzettare e':\n%s\ne si trova all'indirizzo %p\nContiene:\n", incipit, incipit);

  int i=0;
  word = strtok(incipit, delimitatori);
  while(word)
  {
    printf("#%d: \t %15s \t %p \n", i,  word, word);
    ++i;
    word = strtok(NULL, delimitatori);
  }

  // la strtok() ha pero' effetti collaterali di cui tener conto!
  printf("Al termine delle operazioni se stampo incipit ottengo: %s\n", incipit);
  // cosa e' successo? Perche' questo comportamento?

  // stampo carattere per carattere per capire come la strtok ha modificato la stringa originale
  for(int i=0; i<sizeof(incipit); ++i)
  {
    if(incipit[i] >= ' ')
      printf("%c", incipit[i]);
    else
      printf("[%d]", incipit[i]);
  }
  printf("\n");

  return 0;
}

/*
La stringa da spezzettare e':
Nel mezzo del cammin di nostra vita   mi ritrovai per una selva oscura:      che la diritta via era smarrita.       E quanto a dir qual era e cosa dura    esta selva selvaggia et aspra e forte, che nel pensier rinova la paura!
e si trova all'indirizzo 0x7fffb0010330
Contiene:
#0: 	             Nel 	 0x7fffb0010330 
#1: 	           mezzo 	 0x7fffb0010334 
#2: 	             del 	 0x7fffb001033a 
#3: 	          cammin 	 0x7fffb001033e 
#4: 	              di 	 0x7fffb0010345 
#5: 	          nostra 	 0x7fffb0010348 
#6: 	            vita 	 0x7fffb001034f 
#7: 	              mi 	 0x7fffb0010356 
#8: 	        ritrovai 	 0x7fffb0010359 
#9: 	             per 	 0x7fffb0010362 
#10: 	             una 	 0x7fffb0010366 
#11: 	           selva 	 0x7fffb001036a 
#12: 	          oscura 	 0x7fffb0010370 
#13: 	             che 	 0x7fffb001037d 
#14: 	              la 	 0x7fffb0010381 
#15: 	         diritta 	 0x7fffb0010384 
#16: 	             via 	 0x7fffb001038c 
#17: 	             era 	 0x7fffb0010390 
#18: 	        smarrita 	 0x7fffb0010394 
#19: 	               E 	 0x7fffb00103a4 
#20: 	          quanto 	 0x7fffb00103a6 
#21: 	               a 	 0x7fffb00103ad 
#22: 	             dir 	 0x7fffb00103af 
#23: 	            qual 	 0x7fffb00103b3 
#24: 	             era 	 0x7fffb00103b8 
#25: 	               e 	 0x7fffb00103bc 
#26: 	            cosa 	 0x7fffb00103be 
#27: 	            dura 	 0x7fffb00103c3 
#28: 	            esta 	 0x7fffb00103cb 
#29: 	           selva 	 0x7fffb00103d0 
#30: 	       selvaggia 	 0x7fffb00103d6 
#31: 	              et 	 0x7fffb00103e0 
#32: 	           aspra 	 0x7fffb00103e3 
#33: 	               e 	 0x7fffb00103e9 
#34: 	           forte 	 0x7fffb00103eb 
#35: 	             che 	 0x7fffb00103f2 
#36: 	             nel 	 0x7fffb00103f6 
#37: 	         pensier 	 0x7fffb00103fa 
#38: 	          rinova 	 0x7fffb0010402 
#39: 	              la 	 0x7fffb0010409 
#40: 	           paura 	 0x7fffb001040c 
Al termine delle operazioni se stampo incipit ottengo: Nel
Nel[0]mezzo[0]del[0]cammin[0]di[0]nostra[0]vita[0]  mi[0]ritrovai[0]per[0]una[0]selva[0]oscura[0]      che[0]la[0]diritta[0]via[0]era[0]smarrita[0]       E[0]quanto[0]a[0]dir[0]qual[0]era[0]e[0]cosa[0]dura[0]   esta[0]selva[0]selvaggia[0]et[0]aspra[0]e[0]forte[0] che[0]nel[0]pensier[0]rinova[0]la[0]paura[0][0]
*/
