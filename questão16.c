#include <stdio.h>

int main() {
    char cadeia[100];

    printf("Digite uma cadeia de caracteres: ");
    fgets(cadeia, sizeof(cadeia), stdin);

    for (int i = 0; cadeia[i] != '\0'; i++) {
        if (cadeia[i] >= 'a' && cadeia[i] <= 'z') {
            cadeia[i] = cadeia[i] - 32;
        }
    }

    printf("Cadeia em maiúsculas: %s\n", cadeia);

    return 0;
}
