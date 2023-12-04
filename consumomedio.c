#include <stdio.h>

int main() {
  double consumoG, consumoE, gasolina, etanol, razão, razão2, preçoG, preçoE; 

  printf("Informe o consumo médio de gasolina (km/l): "); 
  scanf ("%lf", &consumoG); 

  printf("Informe consumo médio de etanol(km/l): ");
  scanf("%lf", &consumoE);

  printf("Informe preço da gasolina: ");
  scanf("%lf", &gasolina);

  printf("Informe preço do etanol: ");
  scanf("%lf", &etanol); 

  razão = consumoE / consumoG;
  preçoG = gasolina * razão; 
  preçoE = etanol * razão;
  razão2 = preçoE / preçoG; 
  printf("A razão entre consumo médio de etanol e de gasolina é: %f\n", razão); 
  printf("O preço médio da gasolina é: %lf\n", preçoG);
  printf("O preço médio do etanol é: %lf\n", preçoE);
  printf("A razão entre o preço médio do etanol e da gasolina é: %f\n", razão2); 

  if (razão2 < razão) {
    printf("Abastecer com etanol"); 
  } else if (razão2 >= razão){
    printf("Abastecer com gasolina"); 
  }

  return 0;
}
