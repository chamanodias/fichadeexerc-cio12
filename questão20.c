#include <stdio.h>
#include <string.h>

#define TAMANHO_VETOR 5

int main() {
    char modelos[TAMANHO_VETOR][20];
    float consumos[TAMANHO_VETOR];
    int i;
    float menorConsumo = 99999.0;
    int indiceCarroMaisEconomico = 0;

    for (i = 0; i < TAMANHO_VETOR; i++) {
        printf("Digite o modelo do carro %d: ", i + 1);
        scanf("%s", modelos[i]);
        printf("Digite o consumo do carro %d (km/l): ", i + 1);
        scanf("%f", &consumos[i]);

        if (consumos[i] < menorConsumo) {
            menorConsumo = consumos[i];
            indiceCarroMaisEconomico = i;
        }
    }

    printf("\nO modelo do carro mais econômico é: %s\n", modelos[indiceCarroMaisEconomico]);

    printf("\nQuantidade de litros para percorrer 1000 km por carro:\n");
    for (i = 0; i < TAMANHO_VETOR; i++) {
        float litros = 1000.0 / consumos[i];
        printf("%s: %.2f litros\n", modelos[i], litros);
    }

    return 0;
}
