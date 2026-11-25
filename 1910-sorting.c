// Bubblesort, quicksort, and mergesort
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// prototypes of sorting functions
void bubblesort(int *, int);
void quicksort(int *, int, int);
void mergesort(int *a, int n);

// other functions 
void printarray(int *, int); 
void merge(int *, int *, int, int, int);  // used to merge sub blocks

// the code of the following functions can be ignored,
// since we do not have yet explained some C elements used inside them
// the name should be anyway sufficiently self-explanatory
int get_param(int, char **);   // read the size of array
void wait_keypress(void);      // wait for the [ENTER] key


int main(int argc, char **argv)
{
  int n, *a, *b, *c;  // arrays used to test sorting
  clock_t start,stop; // specific type for timings
  double performance; // clock time

  n = get_param(argc, argv);

  // allocate 3 arrays to test 
  // different sorting algos
  a = malloc(sizeof(int) * n);
  b = malloc(sizeof(int) * n);
  c = malloc(sizeof(int) * n);

  srand(time(0));

  // initially I generate a single, sorted, array
  for (int i = 0; i < n; i++)
    a[i]=i+1;

  // then, randomically, unsort it
  for (int i = 0; i < n; i++){
    int j = rand()%n;
    int t = a[i];
    a[i] = a[j];
    a[j] = t;
  }

  for (int i = 0; i < n; i++)    // and replicate the unsorted array
  {
    b[i] = a[i];
    c[i] = a[i];
  }
  // at the end of this cycle, a[], b[], c[] have identical content


  // just print it, or rather, one of them
  printf(" Array to be sorted\n");
  printarray(a, n);

  wait_keypress(); // this function stops until a enter key is pressed

  // BUBBLE SORT

  // get the timer
  start = clock(); // "CPU time" 
		   // bubble sort
  bubblesort(a, n);
  // get the timer
  stop = clock();

  // compute elapsed "time"
  performance = (stop - start)/(double)CLOCKS_PER_SEC; // in order to have seconds I have to divide by CLOCKS_PER_SEC

  // print sorted array
  printf(" Sorted using bubblesort:\n");
  printarray(a, n);
  printf("\nExecution time using bubble sort: %g\n", performance);

  wait_keypress(); 

  // QUICK SORT

  // get the timer
  start = clock(); // "CPU time" 
		   // invoke quick sort
  quicksort(b, 0, n - 1);  
  // get the timer
  stop = clock();

  // compute elapsed "time"
  performance = (stop - start)/(double)CLOCKS_PER_SEC; // in order to have seconds I have to divide by CLOCKS_PER_SEC

  // print sorted array
  printf(" Sorted using quicksort:\n");
  printarray(b, n);
  printf("\nExecution time using quick sort: %g\n", performance);

  wait_keypress(); 

  // MERGE SORT

  // get the timer
  start = clock(); // "CPU time" 
		   // invoke merge sort
  mergesort(c, n);  
  // get the timer
  stop = clock();

  // compute elapsed "time"
  performance = (stop - start)/(double)CLOCKS_PER_SEC; // in order to have seconds I have to divide by CLOCKS_PER_SEC

  // print sorted array
  printf(" Sorted using mergesort:\n");
  printarray(c, n);
  printf("\nExecution time using mergesort: %g\n", performance);





  printf("\n");


  free(a);
  free(b);
  free(c);

  return 0;
}


void printarray(int *a, int n){
  int i;
  if(n<200)
  {
    for (i=0; i<n; i++){
      printf("%5d ",a[i]);
      printf((i+1)%15 ? "" : "\n");
    }
  }
  else
  {
    printf(" Too big array, I print only first and last 30 elements\n");

    for (i=0; i<30; i++){
      printf("%5d ",a[i]);
      printf((i+1)%15?"":"\n");
    }
    printf("  ...\n");
    for (i=n-30; i<n; i++){
      printf("%5d ",a[i]);
      printf((n-i-1)%15?"":"\n");
    }
  }

  printf("\n");
}


// bubblesort implementation
void bubblesort(int *a, int n)
{                                        // takes as input: array of int and number of elements
  int tmp;                               // used for swaps 
  int sup = n-1;                         // index of last element swapped during the last pass, initially latest element
  int last;                              // used to track the latest swap at each round

  while (sup > 0) {                      // round cycle, terminate if no more swaps needed
    last = -1;
    for (int i = 0; i < sup; i++)        // consider each element
      if ((a[i]>a[i+1])) {               // compare against the following one 
	tmp=a[i];                        // swap if not ordered
	a[i]=a[i+1];
	a[i+1]=tmp;
	last = i;                        // track the latest element that was swapped
      }
    sup = last;                          // elements with index > sup are already in the right order
  }
}

// quicksort implementation
void quicksort(int *x, int first, int last)  // in order to exploit recursion, I need a slightly different prototype
{
  if (first >= last) return;                 // if empty array or only 1 element I do not need to sort anything!

  int pivot = x[first];                      // select the first element as pivot (usually not a smart choiche)

  int i = first+1;                           // i and j are the index of the first and last elements of the remaining part of the array
  int j = last;                              
  while (i <= j)                             // basically I use i to scan the array from the left to the right and j to scan the array from the right to the left
  {                                          // once they meet I end the scan

    while (i <= last && x[i] <= pivot)       // I am looking for the first element on the left that is > than the pivot
      i++;

    while (x[j] > pivot)                     // similarly I am looking for the first element on the right that is <= than the pivot
      j--;

    if (i < j)                               // at this point x[i] > pivot and x[j] <= pivot (only if i and j are still on the left and on the right)
    {
      int temp = x[i];                       // swap them!
      x[i] = x[j];
      x[j] = temp;
    }
  }

  // at the end of this cycle:
  // 1. j <= i
  // 2. elements have been split in 2 parts: on the right elements > pivot, on the left elements <= pivot
  // 3. the pivot is still in x[first] 

  int temp = x[first];                     // put the pivot in the "right" place, namely between
  x[first] = x[j];                         // the 2 parts
  x[j] = temp;

  // pivot is now in the right position!

  quicksort(x, first, j-1);                    // use recursion to sort the 2 sub-arrays
  quicksort(x, j+1, last);                     // pivot can be excluded according to what said before
}

// mergesort implementation
void mergesort(int *a, int n)
{
  int i, m;

  
  int *extra = malloc(sizeof(*a) * n);       // auxiliary array

  for (m = 1; m < n; m += m)                 // m is the blocksize: 1, 2, 4 ,8...
    // i is the index of the first element of blocks "on the left side"
    // given m as block size and given I use 2 blocks every turn, I need to move by 2m elements 
    for (i = 0; i < n - 1; i += m + m)
    {
      int from = i;          // index of first element of block on the left
      int mid  = i + m - 1;  // index of last element of the same block 
                             // the index of the last element of the "right" block should be i+2m-1
			     // but, if the array size is not an exactly divisible by 2m, the last right block is shorter (or missing)"
			     // Then there is a risk of an overrun on the right side, better to check that the computed index is not > n - 1
			     // otherwise I clip it at n - 1
      int to = i + m + m - 1;
      if(to > (n - 1))
	to = n - 1;

      // int to   = ((i+m+m-1) > (n - 1)) ? n - 1 : (i+m+m-1); // more compact form

      // we can use merge() to merge blocks element in a single block in a sorted fashion
      // from, mid, and to are the limits of the 2 blocks
      // we use extra as a temporary working area
      merge(a, extra, from, mid, to);
    }
  free(extra);
}

void merge(int *a, int *extra, int start, int m, int end) // we have to merge the elements from a[start]-a[m] with a[m+1]-a[end]
{
  int i, j, k;

  // if the left block is at or beyond end we do not have a right block, nothing to merge
  if(m >= end) return;
  // this can happen only for the last pair of blocks

  // Optimization:
  // copy only the left block on the extra array
  // Why? Hint: writing into a[], can we overwrite an element of the right block not yet read?
  for (i = start; i <= m; i++)
    extra[i] = a[i];

  /* Fusion:
   *   i - index for extra[start..m]   (left half, already copied in extra[])
   *   j - index for a[m+1..end]       (right half, still in a[])
   *   k - writing position for a[]
   *
   * First part, I am ending once I reach the end of one of the 2
   * blocks; a following cycle is used to copy remaining elements
   */
  i = start;
  j = m + 1;
  k = start;

  while (i <= m && j <= end) {
    if (extra[i] <= a[j])
      a[k++] = extra[i++]; // get data from left block (extra[])
    else
      a[k++] = a[j++];     // get data from right block (a[])
  }

  // if we have more elements in the left block ->  we need to copy them
  while (i <= m)
    a[k++] = extra[i++];

  // potential elements still in the right part are already in the right position -> no ops
}






// WARNING: code below this line exploits C elements not yet discussed. 
//          It is not important anyway to understand how they work, focus on the code above only!

int get_param(int argc, char **argv)
{

  if(argc<2){
    printf("Size of the array to test sorting algos: ");
    int tmp;
    scanf("%d", &tmp);
    getchar();
    return tmp;
  }
  else
  {
    return atoi(argv[1]);
  }
}

void wait_keypress(void)
{
  printf("Press [ENTER]");
  getchar();
}

