#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];
    char caractere;
    int contadorVogais = 0;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    printf("Digite um caractere para substituir as vogais: ");
    scanf(" %c", &caractere);

    int comprimento = strlen(palavra);

    for (int i = 0; i < comprimento; i++) {
        if (palavra[i] == 'a' || palavra[i] == 'A' ||
            palavra[i] == 'e' || palavra[i] == 'E' ||
            palavra[i] == 'i' || palavra[i] == 'I' ||
            palavra[i] == 'o' || palavra[i] == 'O' ||
            palavra[i] == 'u' || palavra[i] == 'U') {
            contadorVogais++;
            palavra[i] = caractere;
        }
    }

    printf("Quantidade de vogais na palavra: %d\n", contadorVogais);
    printf("Palavra após substituição das vogais: %s\n", palavra);

    return 0;
}
