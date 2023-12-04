#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {

    printf("Tipo int:\n");
    printf("Número de bytes: %i\n", sizeof(int));
    printf("INT_MAX: %i\n", INT_MAX);
    printf("INT_MIN: %i\n", INT_MIN);

  
  
    printf("Em short int:\n");
    printf("Número de bytes: %d\n", sizeof(short int));
    printf("SHRT_MAX: %d\n", SHRT_MAX);
    printf("SHRT_MIN: %d\n", SHRT_MIN);

  
  
    printf("Em long int:\n");
    printf("Número de bytes: %ld\n", sizeof(long int));
    printf("LONG_MAX: %ld\n", LONG_MAX);
    printf("LONG_MIN: %ld\n", LONG_MIN);


  
    printf("Em unsigned int:\n");
    printf("Número de bytes: %u\n", sizeof(unsigned int));
    printf("UINT_MAX: %u\n", UINT_MAX);

  

    printf("\nTipo float:\n");
    printf("Número de bytes: %d\n", sizeof(float));
    printf("FLT_MAX: %g\n", FLT_MAX);
    printf("FLT_MIN: %g\n", FLT_MIN);


    printf("\nTipo char:\n");
    printf("Número de bytes: %d\n", sizeof(char));
    printf("CHAR_MAX: %d\n", CHAR_MAX);
    printf("CHAR_MIN: %d\n", CHAR_MIN);

  
    printf("\nTipo double:\n");
    printf("Número de bytes: %d\n", sizeof(double));
    printf("DBL_MAX: %g\n", DBL_MAX);
    printf("DBL_MIN: %g\n", DBL_MIN);

    return 0;
}
