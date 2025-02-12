// conversione espressione in notazione polacca inversa mediante stack + coda

/* 
   
   ALGORITMO

1:
   scandisco espressione
    - se incontro numero o spazio -> metto in coda
    - se incontro operatore o parentesi aperta -> metto in stack
    - se incontro parentesi chiusa -> prelevo da stack e metto in coda fino a che non esce una parentesi aperta (che ignoro)

2:
   se stack ancora pieno lo svuoto a suon di pop e metto in coda

3:
   A questo punto la coda contiene la notazione polacca inversa (che posso stampare prelevando)

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define STACK_SIZE 1000
#define QUEUE_SIZE 1000

struct stack
{
  char dati[STACK_SIZE];
  int top;
};

void  push(struct stack *, char);
char  pop(struct stack *);
_Bool stack_empty(struct stack *);

struct queue
{
  char data[QUEUE_SIZE];
  int front, rear;
};

void queue_insert(struct queue *, char);
char queue_get(struct queue *);
_Bool queue_empty(struct queue *);

int main(int argc, char **argv){

  struct stack mystack;
  mystack.top = -1;

  struct queue myqueue;
  myqueue.front = -1;
  myqueue.rear = -1;

  char espressione[1000];
  printf("Inserisci una espressione da convertire in notazione polacca inversa:\n> ");
  scanf("%[^\n]",espressione);

  // PASSO 1 scandisco espressione
  for(int i=0; i<strlen(espressione); ++i){
    char c;
    switch(espressione[i]){

      case '/':
      case '+':
      case '-':
      case '*':
      case '(':
	push(&mystack, espressione[i]);
	break;

      case ')':
	c = pop(&mystack);
	while(c != '('){
	  queue_insert(&myqueue, c);
	  c = pop(&mystack);
	}
	break;
      default: // se arrivo qui e' uno spazio o una cifra
	queue_insert(&myqueue, espressione[i]);
    }
  }

  // PASSO 2 vuoto lo stack da elementi residui
  while(! stack_empty(&mystack) )
  {
    char c = pop(&mystack);
    queue_insert(&myqueue, c);
  }

  // PASSO 3 svuoto coda e stampo contenuto
  while(! queue_empty(&myqueue) )
  {
    char c = queue_get(&myqueue);
    printf("%c", c);
  }
  printf("\n");


  return 0;
}

_Bool stack_empty(struct stack *s)
{
  if(s->top == -1) 
    return 1;
  return 0;
}

void push(struct stack *s, char n)
{
  if(s->top == STACK_SIZE)
  {
    printf("ERRORE: stack pieno, hai inserito una espressione sbagliata (le parentesi erano a posto?)\n");
    exit(EXIT_FAILURE);
  }
  s->dati[++s->top] = n;
}

char pop(struct stack *s)
{
  if(s->top == -1)
  {
    printf("ERRORE: stack vuoto, hai inserito una espressione sbagliata (le parentesi erano a posto?)\n");
    exit(EXIT_FAILURE);
  }
  return s->dati[s->top--];
}


_Bool queue_empty(struct queue *q)
{
  if(q->rear == -1 && q->front != -1)
    return 1;
  return 0;
}

char queue_get(struct queue *q)
{
  if(q->rear == -1 && q->front != -1) // empty queue
  {
    printf("ERRORE: coda vuota, hai inserito una espressione sbagliata (le parentesi erano a posto?)\n");
    exit(EXIT_FAILURE);
  }

  char val = q->data[q->front++];
  q->front = q->front % 1000; // manage overfloW
  if(q->front == q->rear){ // empty queue
    q->front = -1;
    q->rear = -1;
  }
  return val;
}

void queue_insert(struct queue *q, char n)
{
  if(q->rear == q->front && q->front != -1) // full queue
  {
    printf("ERRORE: coda piena, hai inserito una espressione sbagliata (le parentesi erano a posto?)\n");
    exit(EXIT_FAILURE);
  }
  if(q->front == -1){
    q->front = 0;
    q->rear = 0;
  }
  q->data[q->rear++] = n;
  q->rear = q->rear % QUEUE_SIZE; // manage overflow
}

/* ESEMPIO ESECUZIONE

Inserisci una espressione da convertire in notazione polacca inversa:
> (23 + 45) * (12 + 67)
23  45+  12  67+*

*/

