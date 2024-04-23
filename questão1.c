#include <stdio.h>
#include <stdlib.h>

int main() {
    char string[100]; 

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin); 

    printf("A string digitada foi: %s\n", string);

    return 0;
}
