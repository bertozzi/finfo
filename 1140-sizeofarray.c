// array e sizeof
#include<stdio.h>
#include<stdlib.h>


int main(int argc, char **argv){
  int a[]={23, 45,2, 4,9, 34, 34, 23, 90, 17, 18, 19};

  printf("\n");

  printf("sizeof(a)              = %ld\n",  sizeof(a));
  printf("sizeof(a[0])           = %ld\n",  sizeof(a[0]));
  printf("sizeof(a[3])           = %ld\n",  sizeof(a[3]));
  printf("sizeof(int)            = %ld\n",  sizeof(int));
  printf("sizeof(a)/sizeof(a[0]) = %ld\n",  sizeof(a)/sizeof(a[0]));

  printf("\n");

  for(int i = 0; i < sizeof(a)/sizeof(a[0]); ++i)
  {
    printf("a[%d] = %5d\n", i, a[i]);
  }

  return 0;
}

/*

sizeof(a)              = 48
sizeof(a[0])           = 4
sizeof(a[3])           = 4
sizeof(int)            = 4
sizeof(a)/sizeof(a[0]) = 12

a[0] =    23
a[1] =    45
a[2] =     2
a[3] =     4
a[4] =     9
a[5] =    34
a[6] =    34
a[7] =    23
a[8] =    90
a[9] =    17
a[10] =    18
a[11] =    19

*/
