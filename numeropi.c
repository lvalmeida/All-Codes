#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

// Definir a area da circunferencia com base na equação dela: (x- a)^2 + (y-b)^2 = r^2, e em seguida randomizar as coordenadas de x e y e, dependendo do resultado, definir se o ponto está dentro ou fora d o circulo.

int main() {
  int i, x, y, raio = 173; 
  float pCircle, numT = 10000;
  

  srand(time(NULL)); // para que valores aleatorios não se repitam 

  for (i = 0; i < numT; i++) {
    x = rand() % raio;
    y = rand() % raio;

    if ((x * x) + (y * y) < (raio * raio)) {
      pCircle ++; 
    }
  }

  float pi = 4 * pCircle / numT;
  printf("Valor estimado de pi: %f\n", pi); 

  return 0; 
  
}
