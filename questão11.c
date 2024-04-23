#include <stdio.h>
#include <string.h>

int main() {
    char string[100];

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    printf("String sem vogais: ");
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] != 'a' && string[i] != 'A' &&
            string[i] != 'e' && string[i] != 'E' &&
            string[i] != 'i' && string[i] != 'I' &&
            string[i] != 'o' && string[i] != 'O' &&
            string[i] != 'u' && string[i] != 'U') {
            printf("%c", string[i]);
        }
    }
    printf("\n");

    return 0;
}
