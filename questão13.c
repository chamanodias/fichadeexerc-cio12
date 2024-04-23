#include <stdio.h>

int main() {
    char frase[100];
    int contadorCaracteresBrancos = 0;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == ' ' || frase[i] == '\t' || frase[i] == '\n') {
            contadorCaracteresBrancos++;
        }
    }

    printf("A frase contém %d caracteres brancos.\n", contadorCaracteresBrancos);

    return 0;
}
