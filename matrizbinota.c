#include <stdio.h>

int main() {

    float notas[5][3] = {
        {5.3, 8.3, 7.1},
        {4.3, 6.8, 7.3},
        {6.0, 5.4, 1.0},
        {9.7, 10.0, 9.6},
        {5.8, 7.9, 2.1}
    };

  printf("Alunos\t\tNota1\tNota2\tNota3\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\t\t", i);
        for (int j = 0; j < 3; j++) {
            printf("%.1f\t\t", notas[i][j]);
        }
        printf("\n");
    }

    printf("\nNotas alunos:\n\n");
  float mediaAlunos[5] = {0}; 
  for (int i = 0; i < 5; i++) {
      printf("%d\t\t", i);
      for (int j = 0; j < 3; j++) {
          mediaAlunos[i] += notas[i][j];
      }
      mediaAlunos[i] /= 3;
      printf("%.1f\n", mediaAlunos[i]);
  }
  printf("\nMedia das avaliacoes:\n\n");
  float mediaAvaliacoes[3] = {0};
  for (int j = 0; j < 3; j++) {
      for (int i = 0; i < 5; i++) {
          mediaAvaliacoes[j] += notas[i][j];
      }
      mediaAvaliacoes[j] /= 5;
      printf("%.1f\n", mediaAvaliacoes[j]);
  }

    return 0;
}
