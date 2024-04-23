#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    char letraL1, letraL2;

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    printf("Digite a letra a ser substituída (L1): ");
    scanf(" %c", &letraL1);

    printf("Digite a letra substituta (L2): ");
    scanf(" %c", &letraL2);

    for (int i = 0; i < strlen(string); i++) {
        if (string[i] == letraL1) {
            string[i] = letraL2;
        }
    }

    printf("String após substituição: %s\n", string);

    return 0;
}
