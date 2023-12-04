#include <stdio.h>

char *unidades[] = {"zero", "um", "dois", "três", "quatro", "cinco", "seis", "sete", "oito", "nove"};
char *especiais[] = {"dez", "onze", "doze", "treze", "catorze", "quinze", "dezesseis", "dezessete", "dezoito", "dezenove"};
char *dezenas[] = {"vinte", "trinta", "quarenta", "cinquenta", "sessenta", "setenta", "oitenta", "noventa"};
char *centenas[] = {"cento", "duzentos", "trezentos", "quatrocentos", "quinhentos", "seiscentos", "setecentos", "oitocentos", "novecentos"};

int main() {
  int numero;
  int centena = (numero / 100) % 10;
  int dezena = (numero / 10) % 10;
  int unidade = numero % 10;

    printf("Digite um número (0 a 999): ");
    scanf("%d", &numero);

    if (numero < 0 && numero > 999) {
        printf("Número fora do intervalo permitido.\n");
        return 1;
    }

  if (numero >= 0 && numero <= 9) {
    printf("%s", unidades[numero]);
    return 0;
  }

  if (numero >= 10 && numero <= 19){
    printf("%s", especiais[numero - 10]);
    return 0;
  }

   if (numero >= 20 && numero <= 99) {
     if (numero % 10 == 0) {
    printf("%s", dezenas[numero / 10 - 2]);
    return 0;

  } else
       printf("%s e %s", dezenas[numero/ 10 - 2], unidades[numero % 10]);
    return 0;
  }

  if (numero > 99 && numero <= 999) {
if (numero % 100 == 0) {
    printf("%s\n", centenas[numero / 100 - 1]);
  return 0;
} else {
    if (numero % 100 <= 19) {
        printf("%s e ", centenas[numero / 100 - 1]);
        printf("%s\n", especiais[numero % 100 - 10]);
      return 0;
    }
    else {
  if (numero % 10 == 0) {
    printf("%s e %s\n", centenas[numero / 100 - 1], dezenas[(numero % 100) / 10 - 2]);
    return 0;
  } else {
   printf("%s e %s e %s\n", centenas[numero / 100 - 1], dezenas[(numero % 100) / 10 - 2], unidades[numero % 10]);
          return 0;
        }
    }
}
  }
}

