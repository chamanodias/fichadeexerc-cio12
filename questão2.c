#include <stdio.h>

int main() {
    char string[100]; 
    int comprimento = 0;

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin); 

    while (string[comprimento] != '\0') {
        comprimento++;
    }

    printf("O comprimento da string é: %d\n", comprimento);

    return 0;
}
