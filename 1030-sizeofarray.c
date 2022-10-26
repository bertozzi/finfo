// array e sizeof
#include<stdio.h>
#include<stdlib.h>


int main(int argc, char **argv){

  int i;
  int a[]={23, 45,2, 4,9, 34, 34, 23, 90, 17, 18, 19};

  printf("\n");

  printf("sizeof(a)              = %zd\n",  sizeof(a));
  printf("sizeof(a[0])           = %zd\n",  sizeof(a[0]));
  printf("sizeof(int)            = %zd\n",  sizeof(a[0]));
  printf("sizeof(a)/sizeof(a[0]) = %zd\n",  sizeof(a)/sizeof(a[0]));

  printf("\n");

  for(i=0; i<sizeof(a)/sizeof(a[0]); ++i)
  {
    printf("a[%d] = %5d\n", i, a[i]);
  }




  return 0;
}

