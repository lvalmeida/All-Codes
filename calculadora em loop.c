#include <stdio.h>

int main() {
  float num1 = 0, num2 = 0, num = 0, result, result2;
  int op,escolha;

  printf("CALCULADORA\n");

  do {
  printf("\nOpera��es:\nAdi��o (1) Subtra��o (2) Multiplica��o (3) Divis�o (4):\n");
  scanf("%i", &op);

  switch (op) {
    case 1:

    printf("\nDigite valor 1: ");
    scanf("%f", &num1);
    printf("\nDigite valor 2:");
    scanf("%f", &num2);

    result = num1 + num2 ;
    break ;

    case 2:

    printf("\nDigite valor 1: ");
    scanf("%f", &num1);
    printf("\nDigite valor 2:");
    scanf("%f", &num2);

    result = num1 - num2 ;
    break;

    case 3:

    printf("\nDigite valor 1: ");
    scanf("%f", &num1);
    printf("\nDigite valor 2:");
    scanf("%f", &num2);

    result = num1 * num2 ;
    break;

    case 4:

    printf("\nDigite valor 1: ");
    scanf("%f", &num1);
    printf("\nDigite valor 2:");
    scanf("%f", &num2);

    if( num2 != 0) {
    result = num1 / num2 ;
    } else {
    printf("Inv�lido! (divis�o por zero)\n");
    }
    break;

    default:
    printf("Opera��o inv�lida\n");
    break;
  }

  printf("\nResultado: %f", result);

  printf("\nDeseja:\nContinuar a opera��o anterior (1) Realizar nova opera��o (2) Desligar (3):\n");
  scanf("%i", &escolha);

  } while ( escolha == 2);

  if ( escolha == 1) {

    do {
   printf("\nOpera��es:\nAdi��o (1) Subtra��o (2) Multiplica��o (3) Divis�o (4):\n");
   scanf("%i", &op);

  switch (op) {
    case 1:
      printf("Digite novo valor: ");
      scanf("%f", &num);
      result2 = result + num;

    break ;
    case 2:
     printf("Digite novo valor: ");
      scanf("%f", &num);
      result2 = result - num;

    break;
    case 3:
      printf("Digite novo valor: ");
      scanf("%f", &num);
      result2 = result * num;

    break;
    case 4:
      if( num2 != 0) {
      printf("Digite novo valor: ");
      scanf("%f", &num);
      result2 = result / num;

    } else {
      printf("Inv�lido! (divis�o por zero)\n");
        continue;
      }
        break;
    default:
        printf("Opera��o inv�lida\n");
        continue;
  }

    printf("Resultado: %f", result2);
    printf("\nDeseja:\nContinuar a opera��o anterior (1) Realizar nova opera��o (2) Desligar (3):\n");
    scanf("%i", &escolha);

  } while (escolha == 1);


  } else if(escolha == 3) {
   printf ("Encerrado");
  }

  return 0;
 }
