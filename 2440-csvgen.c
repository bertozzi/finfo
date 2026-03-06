// generazione file CSV e binario a partire da struct
#include<stdio.h>
#include<stdlib.h>

// il file contiene, riga per riga, 4 numeri: 1 intero e 3 a virgola mobile separati da ","
// definisco opportuna struttura

#define MAXLEN (20)

struct student
{
  char name[MAXLEN], surname[MAXLEN];
  unsigned short score;
};


int main(int argc, char **argv){


  int nstudents;
  printf("Inserisci il numero degli studenti: ");
  scanf("%d", &nstudents);

  // alloco dinamicamente array per gestirli
  struct student *risultati = malloc(nstudents * sizeof(struct student));

  // ciclo per inserire i voti
  for(int i = 0; i < nstudents; ++i)
  {
    printf("Inserisci nome, cognome e voto dello studente #%d: ", i + 1);
    scanf(" %s %s %hu", risultati[i].name, risultati[i].surname, &risultati[i].score); // score e' un numero non un array e devo usare &
  }


  // salvo i risultati su due file differenti (ovvio che non ha molto senso, ma e' solo per esempio)
  // un file di tipo CSV e un file di tipo binario

  // CSV
  FILE *fp=fopen("esame.csv", "w");
  if(!fp)
  {
    perror("");
    exit(1);
  }

  for(int i = 0; i < nstudents; ++i)
  {
    fprintf(fp, "%s,%s,%hu\n", risultati[i].name, risultati[i].surname, risultati[i].score);
  }

  fclose(fp);


  // file binario
  fp=fopen("esame.dat", "wb");
  if(!fp)
  {
    perror("");
    exit(1);
  }
  fwrite(risultati, sizeof(struct student), nstudents, fp);
  fclose(fp);

  return 0;
}

