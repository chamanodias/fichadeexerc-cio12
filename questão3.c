#include <stdio.h>

int main() {
    char string1[100], string2[100];
    int i = 0;

    printf("Digite a primeira string: ");
    fgets(string1, sizeof(string1), stdin);

    printf("Digite a segunda string: ");
    fgets(string2, sizeof(string2), stdin);

    while (string1[i] == string2[i]) {
        if (string1[i] == '\0' || string2[i] == '\0') {
            printf("As strings são iguais.\n");
            return 0;
        }
        i++;
    }

    printf("As strings são diferentes.\n");
    return 0;
}
