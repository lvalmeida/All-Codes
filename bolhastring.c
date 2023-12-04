#include <stdio.h>
#include <string.h>

int main() {

    char str[8][50];  

    printf("Entre com 8 strings:\n");

    for (int i = 0; i < 8; i++) { 
        printf("Entre com a string %d: ", i + 1);
        scanf("%s", str[i]);
    }

    printf("\n\nStrings inicial:\n");

    for (int i = 0; i < 8; i++) {
        printf("%s ", str[i]);
    }


    printf("\n\nStrings depois da ordenação:\n");

    for (int i = 0; i < 8; i++) {
        printf("%s ", str[i]);
    }

    return 0;
}
