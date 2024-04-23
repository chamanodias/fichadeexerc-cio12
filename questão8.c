#include <stdio.h>

int main() {
    char string[100];

    printf("Digite uma string: ");
    scanf("%s", string);

    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == '0') {
            string[i] = '1';
        }
    }

    printf("A string após a substituição é: %s\n", string);

    return 0;
}
