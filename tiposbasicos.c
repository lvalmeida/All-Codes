#include <math.h>
#include <stdio.h>

int main() {
  float L = 0, V = 0, A;
  int op, M;
  double J;

  printf("Entrar com valor 1: ");
  scanf("%f", &L);

  printf("Entrar com valor 2: ");
  scanf("%f", &V);

  printf("Escolha a opera��o que deseja realizar\n");
  printf("Op��o 1: Adi��o\n");
  printf("Op��o 2: Subtra��o\n");
  printf("Op��o 3: Multiplica��o\n");
  printf("Op��o 4: Divis�o\n");
  scanf("%i", &op);

  if (op == 1) {
    A = L + V;
    M = A;
    J = A;
  } else if (op == 2) {
    A = L - V;
    M = A;
    J = A;
  } else if (op == 3) {
    A = L * V;
    M = A;
    J = A;
  } else if (op == 4) {
    A = L / V;
    M = A;
    J = A;
  }
    printf("\nResultados:\n");
    printf("\nFloat: %f", A);
    printf("\nInt: %i", M);
    printf("\nDouble: %lf", J);
    printf("\nPotencia��o: %e", A);
    printf("\nHexadecimal: %x", M);

  return 0;
}
