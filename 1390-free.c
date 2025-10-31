// uso reale di free() per evitare memory leak, simulazione del lancio di dadi, esempio complesso
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char **argv){
  // si vuole simulare il lancio di n dati a 6 facce e vedere i risultati possibili

  srand(time(0));

  while(1) // la simulazione continua fino a che non la fermo io
  {
    int ndadi;
    printf("Inserire il numero di dati da simulare (0 per terminare): ");
    scanf("%d", &ndadi);

    if(!ndadi) // esco dal ciclo infinito se utente inserisce 0
      break;

    // alloco array che mi terra' conto dei possibili risultati 
    // considerando che il risultato piu' piccolo che posso ottenere e' ndadi (escono tutti 1)
    // e il piu' grande e' 6*ndadi (escono tutti 6)
    // il numero di risultati possibili e' 6*(ndadi-1)+1 (il +1 in quanto gli estremi sono inclusi)
    int nresults = 6*ndadi - ndadi + 1;

    // adesso so quanti elementi deve avere, posso allocarlo
    // dato che lo voglio inizializzare a 0, uso calloc()
    unsigned int *results = calloc(nresults, sizeof(unsigned int));

    // nell'elemento di indice 0 mettero' quante volte e' uscito il risultato minimo (tutti i dadi a 1 ovvero, ndadi)
    // nell'elemento di indice 1 mettero' quante volte e' uscito il risultato piu' vicino al minimo (tutti i dadi a 1 e uno solo a 2, ndadi+1)
    // ...
    // nell'elemento di indice piu' alto mettero' quante volte e' uscito il risultato massimo (tutti i dadi a 6, 6*ndadi)
    // quindi dato l'indice mi basta sommare ndadi per capire quale sia il risultato a cui e' associato quell'elemento

    // simulo "tanti" lanci di tutti i dadi da simulare
    for(int i = 0; i < 100000; ++i)
    {
      int score = 0;
      for(int dado = 0; dado < ndadi; ++dado) // ad ogni sessione di lancio, devo lanciare tutti gli ndadi dadi
	score += rand()%6 + 1;

      // incremento l'elemento corrispondente a quel risultato
      ++results[score - ndadi];
      
    }

    // cerchiamo quale sia il valore uscito piu' frequentemente ricercandolo sequenzialmente nell'array
    int max = 0;
    for(int j = 0; j < nresults; ++j)
      if(results[j] > max)
	max = results[j];

    // stampiamo tutti i possibili risultati in forma "grafica"
    for(int j = 0; j < nresults; ++j)
    {
      printf("%4d: ", j + ndadi); // prima di tutto stampo il risultato
      
      // stampo un numero di asterischi proporzionale al risultato ottenuto (max mi serve per normalizzare)
      for(int i = 0; i < results[j]*60/max; ++i)
	printf("*");

      printf("\n");
    }

    free(results); // fondamentale! se non lo uso ad ogni ciclo "perdo" un'area di memoria
  }

  return 0;
}

