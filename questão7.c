#include <stdio.h>

int main() {
    char string[100];
    int contador = 0;

    printf("Digite uma sequência de caracteres: ");
    scanf("%s", string);

    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == '1') {
            contador++;
        }
    }

    printf("O número de ocorrências do caractere '1' é: %d\n", contador);

    return 0;
}
