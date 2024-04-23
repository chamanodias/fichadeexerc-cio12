#include <stdio.h>

int main() {
    char nome[100];
    int contador = 0;

    printf("Digite um nome: ");
    scanf("%s", nome);
    for (int i = 0; nome[i] != '\0'; i++) {
        contador++;
    }

    printf("O nome tem %d letras.\n", contador);

    return 0;
}
