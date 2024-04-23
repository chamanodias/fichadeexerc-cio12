#include <stdio.h>

int main() {
    char palavra[51]; 
    int somaASCII = 0;

    printf("Digite uma palavra (máximo de 50 letras): ");
    scanf("%s", palavra);

    for (int i = 0; palavra[i] != '\0'; i++) {
        somaASCII += palavra[i];
    }

    printf("A soma dos valores ASCII da palavra é: %d\n", somaASCII);

    return 0;
}
