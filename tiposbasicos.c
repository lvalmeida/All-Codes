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

  printf("Escolha a operação que deseja realizar\n");
  printf("Opção 1: Adição\n");
  printf("Opção 2: Subtração\n");
  printf("Opção 3: Multiplicação\n");
  printf("Opção 4: Divisão\n");
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
    printf("\nPotenciação: %e", A);
    printf("\nHexadecimal: %x", M);

  return 0;
}
