// ungetc() usage
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(int argc, char **argv){

  FILE *fp = fopen("files/numeri.txt", "r");

  if(!fp)
  {
    perror("");
    exit(EXIT_FAILURE);
  }

  // in the input file we have "numbers" mixed inside a text, how we can extract them?
  // the idea is to read the file char by char using fgetc(), once a digit is found we can then read
  // the number using fscanf() as usual

  char c;     // to be used to read the file byte by byte
  int n;      // to be used to read a number from a file
  while( (c = fgetc(fp)) != EOF)
  {
    if(!isdigit(c)) // if we read a symbol that is not a digit we can go on
      continue; 

    // if we arrive here, we read the first digit of a number.
    // In order to read the number we can use fscanf().
    // Problem: we already "consumed" the first digit, namely fscanf() would read only a part of the number...
    // Solution: put back the char to the stream using ungetc()
    ungetc(c, fp);

    // after the ungetc() we can read the WHOLE number using formatted input
    fscanf(fp, "%d", &n);

    printf("I read a number: %d\n", n);
  }
  fclose(fp);

  return 0;
}

