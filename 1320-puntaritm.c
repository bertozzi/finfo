// scorrimento array usando puntatore e aritmetica puntatori
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

  // array con un po' di numeri
  float a[] = {9.539392, 13.341664, 7.937254, 6.557439, 11.445523, 8.888194, 8.000000, 10.954451, 10.246951, 12.767145, 12.569805, 14.525839, 10.198039, 6.557439, 8.774964, 6.324555, 14.282857, 6.000000,
    9.380832, 12.409674, 14.662878, 2.828427, 12.609520, 12.609520, 14.966630, 6.633250, 8.944272, 14.525839, 11.269428, 14.106736, 10.630146, 9.486833, 12.000000, 6.928203, 2.236068, 12.124356, 11.269428,
    8.366600, 11.789826, 15.231546, 10.246951, 7.937254, 9.000000, 14.456832, 14.560220, 5.567764, 11.045361, 13.490738, 13.152946, 14.491377, 14.456832, 12.409674, 9.539392, 11.575837, 8.944272, 9.000000,
    7.071068, 5.656854, 7.615773, 7.000000, 15.198684, 13.076697, 11.832160, 11.874342, 9.591663, 4.123106, 12.649111, 14.798649, 13.892444, 8.062258, 9.486833, 13.076697, 0.000000, 13.076697, 12.083046,
    14.594520, 8.602325, 11.832160, 5.744563, 3.741657, 14.933185, 10.677078, 12.961481, 8.944272, 3.741657, 10.954451, 5.744563, 8.062258, 12.328828, 9.539392, 10.677078, 12.247449, 11.575837, 11.224972,
    12.767145, 15.033296, 4.000000, 9.486833, 9.165151, 14.456832, 5.196152, 6.782330, 12.083046, 5.291503, 9.433981, 12.845233, 10.630146, 12.806248, 13.304135, 4.242641, 13.341664, 6.164414, 11.532563,
    14.764823, 14.966630, 4.358899, 10.246951};

  // puntatore che usero' per scorrere array
  float *p;

  // ciclo di scorrimento in cui uso il puntatore stesso per scorrere array

  for(p=a;                          // inizialmente p punta a inizio a[]
      p < a+sizeof(a)/sizeof(a[0]); // sizeof(a)/sizeof(a[0]) e' il numero di elementi dell'array (117). Se lo sommo all'indirizzo di a, ottengo esattamente l'indirizzo di memoria appena oltre l'ultimo
				    // elemento
      ++p)                          // ogni volta mi "sposto" su elemento successivo
  {
    printf("All'indirizzo %p e' presente il numero %f\n", p, *p);
  }

  return 0;
}

/*
All'indirizzo 0x7ffc28f4b4a0 e' presente il numero 9.539392
All'indirizzo 0x7ffc28f4b4a4 e' presente il numero 13.341664
All'indirizzo 0x7ffc28f4b4a8 e' presente il numero 7.937254
All'indirizzo 0x7ffc28f4b4ac e' presente il numero 6.557439
All'indirizzo 0x7ffc28f4b4b0 e' presente il numero 11.445523
All'indirizzo 0x7ffc28f4b4b4 e' presente il numero 8.888194
All'indirizzo 0x7ffc28f4b4b8 e' presente il numero 8.000000
All'indirizzo 0x7ffc28f4b4bc e' presente il numero 10.954451
...
...
All'indirizzo 0x7ffc28f4b658 e' presente il numero 13.341664
All'indirizzo 0x7ffc28f4b65c e' presente il numero 6.164414
All'indirizzo 0x7ffc28f4b660 e' presente il numero 11.532563
All'indirizzo 0x7ffc28f4b664 e' presente il numero 14.764823
All'indirizzo 0x7ffc28f4b668 e' presente il numero 14.966630
All'indirizzo 0x7ffc28f4b66c e' presente il numero 4.358899
All'indirizzo 0x7ffc28f4b670 e' presente il numero 10.246951
*/


