#include <stdio.h>
#include <string.h>

int encontrarCaractere(char string[], char caractere, int inicio) {
    int tamanho = strlen(string);

    for (int i = inicio; i < tamanho; i++) {
        if (string[i] == caractere) {
            return i;
        }
    }

    return -1;
}

int main() {
    char string[100];
    char caractere;
    int posicaoInicial, indice;

    printf("Digite a string: ");
    scanf("%s", string);
    printf("Digite o caractere: ");
    scanf(" %c", &caractere);
    printf("Digite a posição inicial: ");
    scanf("%d", &posicaoInicial);

    indice = encontrarCaractere(string, caractere, posicaoInicial);

    if (indice != -1) {
        printf("O caractere '%c' foi encontrado na posição %d da string.\n", caractere, indice);
    } else {
        printf("O caractere '%c' não foi encontrado na string a partir da posição %d.\n", caractere, posicaoInicial);
    }

    return 0;
}
