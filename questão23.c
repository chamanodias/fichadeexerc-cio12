#include <stdio.h>

int main() {
    char string[100];
    int inicio, fim;

    printf("Digite uma string de inteiros não negativos: ");
    scanf("%s", string);

    printf("Digite o valor de I: ");
    scanf("%d", &inicio);
    printf("Digite o valor de J: ");
    scanf("%d", &fim);

    printf("O segmento S[%d..%d] é: ", inicio, fim);
    for (int i = inicio; i <= fim; i++) {
        printf("%c", string[i]);
    }
    printf("\n");

    return 0;
}
