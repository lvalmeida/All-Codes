#include <stdio.h>

int main() {

    char vec[8];
    int tam = sizeof(vec) / sizeof(vec[0]); 
    char temp = 0; 

    for (int i = 0; i < tam; i++) { 
        printf("Entre com um caractere para vec[8]: "); 
        scanf(" %c", &temp);  
        vec[i] = temp; 
    }

    printf("\n\nVetor inicial:\n");

    for (int i = 0; i < tam; i++) {
        printf("%c ", vec[i]);
    }

    printf("\n\nVetor depois da ordenação:\n");

    for (int i = 0; i < tam - 1; i++) {
        for (int j = 0; j < tam - i - 1; j++) {
            if (vec[j] > vec[j + 1]) {
                char temp = vec[j];
                vec[j] = vec[j + 1];
                vec[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < tam; i++) {
        printf("%c ", vec[i]);
    }

    return 0;
}
