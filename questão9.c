#include <stdio.h>

int main() {
    char nome[100];

    printf("Digite um nome: ");
    scanf("%s", nome);

    if (nome[0] == 'a' || nome[0] == 'A') {
        printf("Nome: %s\n", nome);
    }

    return 0;
}
