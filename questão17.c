#include <stdio.h>
#include <string.h>

int main() {
    char frase[100];
    char resultado[100];
    int j = 0;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    for (int i = 0; i < strlen(frase); i++) {
        if (frase[i] != ' ') {
            resultado[j++] = frase[i];
        }
    }
    resultado[j] = '\0'; 

    printf("Frase sem espaços em branco: %s\n", resultado);

    return 0;
}
