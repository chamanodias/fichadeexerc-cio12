#include <stdio.h>
#include <string.h>

void inverterString(char *str) {
    int tamanho = strlen(str);
    for (int i = 0; i < tamanho / 2; i++) {
        char temp = str[i];
        str[i] = str[tamanho - i - 1];
        str[tamanho - i - 1] = temp;
    }
}

void substituirAporAsterisco(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'A' || str[i] == 'a') {
            str[i] = '*';
        }
    }
}

int main() {
    char frase1[100], frase2[100];

    printf("Digite a primeira frase: ");
    fgets(frase1, sizeof(frase1), stdin);
    inverterString(frase1);
    substituirAporAsterisco(frase1);

    printf("Digite a segunda frase: ");
    fgets(frase2, sizeof(frase2), stdin);
    inverterString(frase2);
    substituirAporAsterisco(frase2);

    printf("Frase 1 invertida e com 'A' substituído por '*': %s\n", frase1);
    printf("Frase 2 invertida e com 'A' substituído por '*': %s\n", frase2);

    return 0;
}
